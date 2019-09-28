'''
Udemy - Complete Python Bootcamp
Milestone Project 2 - Blackjack
Conor O'Donovan

Steps:
1. Create a deck of 52 cards
2. Shuffle the deck
3. Ask the Player for their bet
4. Make sure that the Player's bet does not exceed their available chips
5. Deal two cards to the Dealer and two cards to the Player
6. Show only one of the Dealer's cards, the other remains hidden
7. Show both of the Player's cards
8. Ask the Player if they wish to Hit, and take another card
9. If the Player's hand doesn't Bust (go over 21), ask if they'd like to Hit again.
10. If a Player Stands, play the Dealer's hand. The dealer will always Hit until the Dealer's value meets or exceeds 17
11. Determine the winner and adjust the Player's chips accordingly
12. Ask the Player if they'd like to play again
'''

from Blackjack_deck_class import Deck
from Blackjack_hand_class import Hand

SUITS = ("Hearts", "Diamonds", "Spades", "Clubs")
RANKS = ("Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace")
VALUES = {"Two": 2, "Three": 3, "Four": 4, "Five": 5, "Six": 6, "Seven": 7, "Eight": 8, "Nine": 9, "Ten": 10,
          "Jack": 10, "Queen": 10, "King": 10, "Ace": 11}

player_hand = Hand()
dealer_hand = Hand()


def welcome():
    print("=" * 22)
    print("Welcome to Blackjack!")
    print("=" * 22)


def take_bet(current_chips):
    bet_placed = False
    amount_to_bet_int = 0

    while not bet_placed:
        amount_to_bet_str = input("Place your bet: ")
        try:
            amount_to_bet_int = int(amount_to_bet_str)

            if amount_to_bet_int == 0:
                print("You must bet at least one chip!")
                continue
            if current_chips >= amount_to_bet_int:
                bet_placed = True
            else:
                print("You do not have enough chips to make this bet!")
                continue
        except:
            print("That is not a valid amount!")
            continue

    return amount_to_bet_int


def show_chips(chips):
    if chips > 1 or chips <= 0:
        print("You have {} chips.".format(chips))
    else:
        print("You have {} chip.".format(chips))


def get_new_deck():
    deck = Deck(SUITS, RANKS).shuffle_deck()
    return deck


def dealing():
    import time

    print("Dealing...\n")
    time.sleep(1)


def deal_initial_cards(deck):
    player_hand.add_card(deck.pop(), VALUES)
    player_hand.add_card(deck.pop(), VALUES)
    dealer_hand.add_card(deck.pop(), VALUES)
    dealer_hand.add_card(deck.pop(), VALUES)


def show_hands_player_turn():
    print("Player Hand: {}".format(player_hand))


def show_initial_dealer_hand():
    print("Dealer Hand: {}".format(dealer_hand.dealer()))


def show_hands_dealer_turn():
    print("Dealer Hand: {}".format(dealer_hand))


def deal_card(deck, turn):
    if turn == "Player":
        player_hand.add_card(deck.pop(), VALUES)
    elif turn == "Dealer":
        dealer_hand.add_card(deck.pop(), VALUES)


def check_if_bust(hand, check_count):
    if hand.value > 21:
        if check_count == 1:
            if hand.check_for_aces() > 0:
                hand.value -= 10
        elif check_count == 2:
            if hand.check_for_aces() > 1:
                hand.value -= 10
        elif check_count == 3:
            if hand.check_for_aces() > 2:
                hand.value -= 10
        elif check_count == 4:
            if hand.check_for_aces() > 3:
                hand.value -= 10

        if hand.value > 21:
            return "Bust"
        elif hand.value == 21:
            return "Win"
        else:
            return ""

    elif hand.value == 21:
        return "Win"

    else:
        return ""


def switch_to_dealer():
    import time
    print("\nDealer's turn...\n")
    time.sleep(1)


def check_for_winner(hand1, hand2):
    player_score = hand1
    dealer_score = hand2

    if player_score > dealer_score:
        result = "Player wins!"
    elif dealer_score > player_score:
        result = "Dealer wins!"
    else:
        result = "Draw!"

    return result


def adjust_chips(chips, who_won):
    if who_won == "Player":
        chips = chips.win_bet()
    elif who_won == "Dealer":
        chips = chips.lose_bet()

    return chips


def play_again():
    restart_or_quit = input("Would you like to place another bet? (Y/N)").upper()

    return restart_or_quit


def main():
    from Blackjack_chips_class import Chips
    import time

    in_game = True

    ALLOWED_PLAYER_INPUTS = ["H", "S"]

    player_chips = Chips()

    welcome()

    while in_game:
        playing = True

        player_action = ""
        player_win_status = ""  # Can be "Bust", "Win", "Draw"
        dealer_win_status = ""  # Can be "Bust", "Win", "Draw"
        current_turn = "Player"
        winner = ""  # Can be "Player" or "Dealer"

        player_hand.clear_hand()
        dealer_hand.clear_hand()

        show_chips(player_chips.total)

        current_deck = get_new_deck()

        bet_amount = take_bet(player_chips.total)

        player_chips.total -= bet_amount

        dealing()

        deal_initial_cards(current_deck)

        show_hands_player_turn()

        if player_hand.value == 21:
            winner = "Player"
            playing = False

        show_initial_dealer_hand()

        aces_check_count = 1

        while playing:
            while player_action not in ALLOWED_PLAYER_INPUTS:
                player_action = input("Hit (H) or Stand (S): ").upper()

                if player_action == "H":
                    dealing()
                    deal_card(current_deck, current_turn)

                    player_win_status = check_if_bust(player_hand, aces_check_count)

                    show_hands_player_turn()

                    if player_hand.check_for_aces() >= aces_check_count:
                        aces_check_count += 1

                    if player_win_status == "Bust":
                        winner = "Dealer"
                        playing = False
                        break
                    elif player_win_status == "Win":
                        winner = "Player"
                        playing = False
                        break

                    player_action = ""

                elif player_action == "S":
                    current_turn = "Dealer"

                    switch_to_dealer()

                    show_hands_dealer_turn()

                    while dealer_hand.value < 17:
                        deal_card(current_deck, current_turn)
                        dealing()
                        dealer_win_status = check_if_bust(dealer_hand, aces_check_count)

                        if dealer_hand.check_for_aces() >= aces_check_count:
                            aces_check_count += 1

                        show_hands_dealer_turn()

                        if dealer_win_status == "Bust" or dealer_win_status == "Win":
                            if dealer_win_status == "Bust":
                                winner = "Player"
                            elif dealer_win_status == "Win":
                                winner = "Dealer"
                    else:
                        playing = False
        else:
            if player_win_status == "Win" or dealer_win_status == "Bust":
                winner = "Player"

            elif player_win_status == "" and dealer_win_status == "":
                if check_for_winner(player_hand.value, dealer_hand.value) == "Player wins!":
                    winner = "Player"

                elif check_for_winner(player_hand.value, dealer_hand.value) == "Dealer wins!":
                    winner = "Dealer"

                elif check_for_winner(player_hand.value, dealer_hand.value) == "Draw!":
                    winner = ""

            if winner == "Player" or winner == "Dealer":
                print("{} wins!\n".format(winner))

                if winner == "Player":
                    player_chips.total += (bet_amount * 2)

            else:
                print("Draw!\n")

            time.sleep(1)

            show_chips(player_chips.total)

            if player_chips.total > 0:
                restart = ""
                while restart != "Y" and restart != "N":
                    restart = play_again()
                    if restart == "N":
                        print("Thank you for playing!")
                        quit()
            else:
                print("=" * 22)
                print("You are out of chips!\n"
                      "GAME OVER")
                print("=" * 22)
                time.sleep(2)
                quit()
    else:
        quit()


if __name__ == "__main__":
    main()
