class Product:
    def __init__(self, name, price, quantity) -> None:
        self.name = name
        self.price = price
        self.quantity = quantity

    def __repr__(self):
        return f"Product(name={self.name}, price={self.price}, quantity={self.quantity})"


class Shop:
    def __init__(self) -> None:
        self.products = {}

    def add_product(self, product: Product) -> None:
        if product.name in self.products:
            # If product already exists, increase its quantity
            self.products[product.name].quantity += product.quantity
        else:
            # Add a new product to the shop
            self.products[product.name] = product
        print(f"Added {product.quantity} units of {product.name} to the shop.")

    def buy_product(self, product_name: str, quantity: int) -> None:
        if product_name in self.products and self.products[product_name].quantity >= quantity:
            self.products[product_name].quantity -= quantity
            print(f"Congratulations! You successfully bought {quantity} unit(s) of {product_name}.")
            if self.products[product_name].quantity == 0:
                del self.products[product_name]  # Remove product if quantity is zero
        else:
            print(f"Sorry, {product_name} is either out of stock or the requested quantity is unavailable.")

    def show_products(self):
        if not self.products:
            print("No products available in the shop.")
        else:
            print("Products available in the shop:")
            for product in self.products.values():
                print(product)


# Example usage:

# Create a Shop
my_shop = Shop()

# Create some Products
product1 = Product("Laptop", 1500, 10)
product2 = Product("Phone", 800, 5)
product3 = Product("Headphones", 100, 20)

# Add products to the Shop
my_shop.add_product(product1)
my_shop.add_product(product2)
my_shop.add_product(product3)

# Show available products
my_shop.show_products()

# Try buying a product
my_shop.buy_product("Phone", 2)  # Successful purchase
my_shop.buy_product("Laptop", 15)  # Not enough stock

# Show remaining products after purchase
my_shop.show_products()
