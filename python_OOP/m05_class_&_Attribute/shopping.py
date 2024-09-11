class shopping:
    def __init__(self, name):
        self.name = name
        self.cart =[]

    def add_to_cart(self, item, price, quantity):
        product ={'item' : item, 'price' : price, 'quantity': quantity}
        self.cart.append(product)
    
    def remove_item(self, item_name):
        # Find the item in the cart and remove it
        for product in self.cart:
            if product['item'] == item_name:
                self.cart.remove(product)
                print(f'{item_name} has been removed from your cart.')
                return
        print(f'{item_name} not found in your cart.')


    def checkout(self, amount):
        Total = 0
        for item in self.cart:
            # print(item)
            Total += item['price'] * item['quantity']
        print('total price', Total ,'taka')
        if amount < Total:
            print(f'please provide {Total-amount} more taka')
        else:
            extra = amount- Total
            print(f'Here is your items and extra money {extra} taka')
        
        



swapan = shopping('alan swapan')
swapan.add_to_cart('alu', 50,6)
swapan.add_to_cart('potol', 20,2)
swapan.add_to_cart('sosa', 100,3)

print(swapan.cart)
swapan.checkout(600)


swapan.remove_item('potol')

print(swapan.cart)

# swapan.checkout(600)
swapan.checkout(1600)