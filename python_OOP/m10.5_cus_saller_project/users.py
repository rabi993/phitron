# from order import Order

# class User:
#     def __init__(self, email, password):
#         self.email = email
#         self.password = password

# class Customer(User):
#     def __init__(self, email, password):
#         super().__init__(email, password)
#         self.orders = []

#     def place_order(self, store, product_name, quantity):
#         product = store.get_product(product_name)
#         if product and product.stock >= quantity:
#             order = Order(self, product, quantity)
#             self.orders.append(order)
#             store.process_order(order)
#             print(f"Order placed for {quantity} of {product.name}")
#         else:
#             print(f"Sorry, {product_name} is out of stock or insufficient quantity.")
#             customer_menu(self)  # Redirect to customer menu after failure

# class Seller(User):
#     def __init__(self, email, password):
#         super().__init__(email, password)
#         self.products = []

#     def publish_product(self, store, name, price, stock):
#         from product import Product  # Import inside the method to avoid circular imports
#         product = Product(name, price, stock, self)
#         self.products.append(product)
#         store.add_product(product)
#         print(f"Product {name} published with price {price} and stock {stock}")

# from order import Order
# from product import Product

# class User:
#     def __init__(self, email, password):
#         self.email = email
#         self.password = password

# class Customer(User):
#     def __init__(self, email, password):
#         super().__init__(email, password)
#         self.cart = []
#         self.orders = []

#     def add_to_cart(self, store, product_name, quantity):
#         product = store.get_product(product_name)
#         if product and product.stock >= quantity:
#             self.cart.append({'name': product.name, 'price': product.price, 'quantity': quantity})
#             print(f"{quantity} of {product_name} added to cart.")
#         else:
#             print(f"Sorry, {product_name} is out of stock or insufficient quantity.")

#     def calculate_total(self):
#         total_price = sum(item['price'] * item['quantity'] for item in self.cart)
#         return total_price

#     def place_order(self, store):
#         for item in self.cart:
#             product = store.get_product(item['name'])
#             if product and product.stock >= item['quantity']:
#                 order = Order(self, product, item['quantity'])
#                 self.orders.append(order)
#                 store.process_order(order)
#         self.cart = []  # Empty the cart after placing the order

# class Seller(User):
#     def __init__(self, email, password):
#         super().__init__(email, password)
#         self.products = []

#     def publish_product(self, store, name, price, stock):
#         product = Product(name, price, stock, self)
#         store.add_product(product)
#         print(f"Product {name} published with price {price} and stock {stock}")

from order import Order
from product import Product

class User:
    def __init__(self, email, password):
        self.email = email
        self.password = password

class Customer(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        self.cart = []
        self.orders = []

    def add_to_cart(self, store, product_name, quantity):
        product = store.get_product(product_name)
        if product and product.stock >= quantity:
            self.cart.append({'name': product.name, 'price': product.price, 'quantity': quantity})
            product.reduce_stock(quantity)  # Reduce stock in the store
            print(f"{quantity} of {product_name} added to cart.")
        else:
            print(f"Sorry, {product_name} is out of stock or insufficient quantity.")

    def calculate_total(self):
        total_price = sum(item['price'] * item['quantity'] for item in self.cart)
        return total_price

    def place_order(self, store):
        for item in self.cart:
            product = store.get_product(item['name'])
            if product and product.stock >= item['quantity']:
                order = Order(self, product, item['quantity'])
                self.orders.append(order)
                store.process_order(order)
        self.cart = []  # Empty the cart after placing the order

class Seller(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        self.products = []

    def publish_product(self, store, name, price, stock):
        product = Product(name, price, stock, self)
        store.add_product(product)
        print(f"Product {name} published with price {price} and stock {stock}")
