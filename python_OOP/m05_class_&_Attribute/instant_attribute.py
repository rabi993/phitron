class shop:
    # cart = []  #it is a class attribute
    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = [] # it is an instant attribute

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

apu = shop('apu bishwas')
apu.add_to_cart('hair band')
apu.add_to_cart('flower')
apu.add_to_cart('high hill')
print(apu.cart)