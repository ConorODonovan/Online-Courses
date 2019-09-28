'''
Deck class
'''


class Deck:

    def __init__(self, suits, ranks):
        from Blackjack_card_class import Card

        self.deck = []

        for suit in suits:
            for rank in ranks:
                self.deck.append(Card(suit, rank))

    def __str__(self):
        deck_str = ""

        for i in self.deck:
            if i != self.deck[-1]:
                deck_str += str(i) + ", "
            else:
                deck_str += str(i)

        return deck_str

    def get_deck_as_list(self):
        return self.deck

    def shuffle_deck(self):
        import random
        random.shuffle(self.deck)
        return self.deck
