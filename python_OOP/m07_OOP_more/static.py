class Shopping:
    cart = []  #class attribute # static attribute
    origin = 'china'

    def __init__(self, name, location) -> None:
        self.name = 'jamuna city'    # instance attribute
        self.location = 'jam er moddhe' 

    def purchase(self, item, price, amount):
        remaining = amount -  price
        print(f'buying: {item} for price: {price} and remaining: {remaining}')

    # @staticmethod
    # def multiply(self, a, b):
    #     print('a*b')
    @staticmethod
    def multiply(a, b):
        print('a*b')


    @classmethod
    def hudai_dekhi(self, item):
        print('hudai dekhi but kinmuna ', item)



basundhara = Shopping('basundhara', 'not popular location')
basundhara.purchase('lungi', 500, 1000)
# Shopping.purchase( 2, 3, 5)
basundhara.hudai_dekhi('lungi')
Shopping.hudai_dekhi('panjabi')
Shopping.multiply(3,5)
basundhara.multiply(6,8)