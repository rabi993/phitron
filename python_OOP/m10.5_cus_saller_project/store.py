from product import Product
from users import Customer, Seller

class Store:
    def __init__(self):
        self.products = []
        self.customers = []
        self.sellers = []

    def register_customer(self, email, password):
        customer = Customer(email, password)
        self.customers.append(customer)

    def register_seller(self, email, password):
        seller = Seller(email, password)
        self.sellers.append(seller)

    def verify_login(self, email, password):
        for customer in self.customers:
            if customer.email == email and customer.password == password:
                return customer
        for seller in self.sellers:
            if seller.email == email and seller.password == password:
                return seller
        return None

    def add_product(self, product):
        self.products.append(product)

    def show_available_products(self):
        print("\n--- Available Products ---")
        for product in self.products:
            if product.stock > 0:
                print(f"{product.name}: Price = {product.price}, Stock = {product.stock}")

    def get_product(self, name):
        for product in self.products:
            if product.name == name and product.stock > 0:
                return product
        return None

    def process_order(self, order):
        order.product.reduce_stock(order.quantity)
