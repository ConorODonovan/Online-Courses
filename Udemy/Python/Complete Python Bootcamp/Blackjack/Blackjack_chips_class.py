'''
Chips class
'''


class Chips:

    def __init__(self):
        self.total = 100
        self.bet = 0

    def __str__(self):
        return "Chips: {}".format(self.total)

    def place_bet(self):
        self.total -= self.bet

    def win_bet(self):
        self.total += (self.bet * 2)

    def lose_bet(self):
        self.total -= self.bet
