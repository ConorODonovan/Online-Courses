'''
Conor O'Donovan
December 2018

Udemy - Complete Python Bootcamp
Milestone Project 1 - Tic Tac Toe

Creating a two-player Tic Tac Toe game

Steps:
1.	We need to print a board.
2.	Take in player input.
3.	Place their input on the board.
4.	Check if the game is won,tied, lost, or ongoing.
5.	Repeat c and d until the game has been won or tied.
6.	Ask if players want to play again.
'''

GAME_STATUS = "Setting up"


def player1_symbol_select():
    '''
    Allows Player 1 to select whether they want to be X or O
    :return: Player 1's symbol (X or O)
    '''
    player1_symbol = ""

    print("=" * 80)
    print("Welcome to Tic Tac Toe")
    print("=" * 80)

    while player1_symbol != "X" and player1_symbol != "O":
        player1_symbol = input("Player 1, please select whether you would like to be X or O: ").upper()

    return player1_symbol


def player2_symbol_select(player1):
    '''
    Assigns Player 2's symbol based on Player 1's selection
    :param player1: Player 1's selected symbol
    :return: Player 2's symbol
    '''
    if player1 == "X":
        player2 = "O"
    else:
        player2 = "X"

    return player2


def print_player_symbols(player1, player2):
    '''
    Prints the assigned symbols (X or O) for each player
    :param player1: Player 1's symbol (X or O)
    :param player2: Player 2's symbol (X or O)
    :return: Prints the assigned symbols (X or O) for each player
    '''
    print("=" * 80)
    print("Player 1 is {}".format(player1))
    print("Player 2 is {}\n".format(player2))


def print_board(lst):
    '''
    Prints the board, updating each square as players take their turns
    :param lst: The list of inputs assigned to the number pad
    :return: Prints the board
    '''
    print("{}|{}|{}\n"
          "{}|{}|{}\n"
          "{}|{}|{}\n".format(lst[6], lst[7], lst[8], lst[3], lst[4], lst[5], lst[0], lst[1], lst[2]))


def game_setup_complete():
    return "In progress"


def inputs_list_initialise():
    '''
    Sets up the list of inputs corresponding to the number pad. Initially, they're all blank
    :return: A blank inputs list
    '''
    inputs_lst = [" ", " ", " ", " ", " ", " ", " ", " ", " "]

    return inputs_lst


def take_turn(player, lst):
    '''
    Prompts the player to take their turn. If the player attempts to select a previously filled square, prompts them
     to try again
    :param player: Whether it's player 1 or 2's turn
    :param lst: The input list corresponding to the number pad
    :return: The player's input for that turn
    '''
    allowed_values = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]
    turn_input = ""

    while turn_input not in allowed_values:
        if player == "1":
            turn_input = input("Player 1 take turn: \n")
        else:
            turn_input = input("Player 2 take turn: \n")

    while lst[int(turn_input) - 1] != " ":
        if player == "1":
            turn_input = input("Space not free. Player 1 take turn: \n")
            while turn_input not in allowed_values:
                turn_input = input("Player 1 take turn: \n")
        else:
            turn_input = input("Space not free. Player 2 take turn: \n")
            while turn_input not in allowed_values:
                turn_input = input("Player 2 take turn: \n")

    return int(turn_input)


def player_switch(player):
    '''
    Switches to the other player after a turn
    :param player: The player whose turn it previously was
    :return: The player whose turn it now is
    '''
    if player == "1":
        player = "2"
    else:
        player = "1"

    return player


def inputs_on_board(lst, input_pos, player_turn, player1_symbol, player2_symbol):
    '''
    Puts an X or O on the board accordingly, based on the players' inputs
    :param lst: The input list corresponding to the number pad
    :param input_pos: The current input position
    :param player_turn: The player whose turn it currently is
    :param player1_symbol: Whether Player 1 is X or O
    :param player2_symbol: Whether Player 2 is X or O
    :return: The updated input list
    '''
    if player_turn == "1":
        lst[input_pos - 1] = player1_symbol
    else:
        lst[input_pos - 1] = player2_symbol

    return lst


def check_game_status(lst, player1_symbol):
    game_won = False
    game_draw = False
    winning_symbol = " "

    if lst[0] == lst[1] == lst[2] != " ":
        game_won = True
        winning_symbol = lst[0]
    elif lst[3] == lst[4] == lst[5] != " ":
        game_won = True
        winning_symbol = lst[3]
    elif lst[6] == lst[7] == lst[8] != " ":
        game_won = True
        winning_symbol = lst[6]
    elif lst[0] == lst[3] == lst[6] != " ":
        game_won = True
        winning_symbol = lst[0]
    elif lst[1] == lst[4] == lst[7] != " ":
        game_won = True
        winning_symbol = lst[1]
    elif lst[2] == lst[5] == lst[8] != " ":
        game_won = True
        winning_symbol = lst[2]
    elif lst[0] == lst[4] == lst[8] != " ":
        game_won = True
        winning_symbol = lst[0]
    elif lst[2] == lst[4] == lst[6] != " ":
        game_won = True
        winning_symbol = lst[2]

    if " " not in lst and game_won == False:
        game_draw = True

    if game_won == True:
        if winning_symbol == player1_symbol:
            print("Player 1 wins!\n")
        else:
            print("Player 2 wins!\n")
        return "Game won"
    elif game_draw == True:
        print("The game has ended in a draw!\n")
        return "Game won"
    else:
        return "In progress"


def game_over_options():
    print("=" * 80)
    option_selected = input("Please select one of the following options:\n"
                            "1. Replay\n"
                            "2. Quit\n")

    while option_selected not in ["1", "2"]:
        print("=" * 80)
        option_selected = input("Please select a valid option:\n"
                                "1. Replay\n"
                                "2. Quit\n")

    return option_selected


if __name__ == "__main__":
    while GAME_STATUS == "Setting up":
        player_1_symbol = player1_symbol_select()
        player_2_symbol = player2_symbol_select(player_1_symbol)
        print_player_symbols(player_1_symbol, player_2_symbol)
        inputs_list = inputs_list_initialise()
        print_board(inputs_list)
        player_turn = "1"
        GAME_STATUS = game_setup_complete()

        while GAME_STATUS == "In progress":
            turn = take_turn(player_turn, inputs_list)
            inputs_list_updated = inputs_on_board(inputs_list, turn, player_turn, player_1_symbol, player_2_symbol)
            print_board(inputs_list_updated)
            player_turn = player_switch(player_turn)
            GAME_STATUS = check_game_status(inputs_list, player_1_symbol)
            while GAME_STATUS == "Game won":
                if game_over_options() == "1":
                    GAME_STATUS = "Setting up"
                else:
                    quit()
