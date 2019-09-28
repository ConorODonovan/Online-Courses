'''
Card class
'''


class Card:

    def __init__(self, suit, rank):
        self.suit = suit
        self.rank = rank

    def __str__(self):
        return "{} of {}".format(self.rank, self.suit)

    def __repr__(self):
        return "{} of {}".format(self.rank, self.suit)
