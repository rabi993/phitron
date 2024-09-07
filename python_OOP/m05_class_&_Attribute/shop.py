class shop:
    cart = []
    def __init__(self, buyer):
        self.buyer = buyer

    def add_to_cart(self,  item):
        self.cart.append(item)


meyhjabeen = shop("meh jabeen")
meyhjabeen.add_to_cart('shoes')
meyhjabeen.add_to_cart('bag')
meyhjabeen.add_to_cart('pet')

print(meyhjabeen.cart)

nisho = shop("ni sho")
nisho.add_to_cart('watch')
nisho.add_to_cart('cap')

print(nisho.cart)