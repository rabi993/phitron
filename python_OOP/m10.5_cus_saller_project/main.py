from store import Store
from users import Customer, Seller

store = Store()

def main_page():
    while True:
        print("\n--- Main Page ---")
        print("Press 1 for sign Up As a Customer")
        print("Press 2 for sign Up As a Seller")
        print("Press 3 for Login")
        choice = input("--> ")

        if choice == "1":
            signup_customer()
        elif choice == "2":
            signup_seller()
        elif choice == "3":
            login()
        else:
            print("Invalid option, please try again.")

def signup_customer():
    print("\n--- Customer Sign Up ---")
    email = input("Enter Your Email: ")
    password = input("Enter Your Password: ")
    store.register_customer(email, password)
    print("Customer account created successfully.")
    main_page()

def signup_seller():
    print("\n--- Seller Sign Up ---")
    email = input("Enter Your Email: ")
    password = input("Enter Your Password: ")
    store.register_seller(email, password)
    print("Seller account created successfully.")
    main_page()

def login():
    print("\n--- Login ---")
    email = input("Enter Your Email: ")
    password = input("Enter Your Password: ")

    user = store.verify_login(email, password)
    if user:
        if isinstance(user, Customer):
            customer_menu(user)
        elif isinstance(user, Seller):
            seller_menu(user)
    else:
        print("Verification failed. Returning to Main Page.")
        main_page()

def seller_menu(seller):
    while True:
        print("\n--- Seller Menu ---")
        print("Press 1 for Add Products")
        print("Press 2 for Back to Main Page")
        choice = input("--> ")

        if choice == "1":
            add_product(seller)
        elif choice == "2":
            main_page()
        else:
            print("Invalid option, please try again.")

def add_product(seller):
    print("\n--- Add Product ---")
    name = input("Enter product name: ")
    price = float(input("Enter product price: "))
    quantity = int(input("Enter product quantity: "))
    seller.publish_product(store, name, price, quantity)
    print("Product added successfully.")
    print("Press 1 for Add Products or Press 2 for Back to Main Page")
    choice = input("--> ")
    
    if choice == "1":
        add_product(seller)
    elif choice == "2":
        main_page()

def customer_menu(customer):
    while True:
        print("\n--- Customer Menu ---")
        store.show_available_products()
        print("\nEnter product name to buy or press 2 for Back to Main Page.")
        choice = input("--> ")

        if choice == "2":
            main_page()
        else:
            try:
                quantity = int(input("Enter quantity: "))
                customer.place_order(store, choice, quantity)
            except ValueError:
                print("Invalid input. Please enter a valid quantity.")
                customer_menu(customer)

if __name__ == "__main__":
    main_page()
