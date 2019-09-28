'''
Hand class
'''


class Hand:

    def __init__(self):
        self.cards = []
        self.value = 0
        self.aces = 0

    def __str__(self):
        return "{}\n" \
               "The value of the hand is {}\n".format(self.cards, self.value)

    def __repr__(self):
        return self.cards

    def add_card(self, card, values):
        self.cards.append(card)
        self.value += values[card.rank]

    def check_for_aces(self):
        ace_count = 0

        for i in self.cards:
            if "Ace" in str(i):
                ace_count += 1

        return ace_count

    def dealer(self):
        return "HIDDEN, {}\n" \
               "The value of the hand is unknown.\n".format(self.cards[1:])

    def clear_hand(self):
        self.cards.clear()
        self.value = 0
        self.aces = 0
