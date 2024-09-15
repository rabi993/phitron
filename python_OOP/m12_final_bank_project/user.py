
from account import Account

class User:
    def __init__(self, bank):
        self.bank = bank

    def create_account(self, name, email, password, address, account_type):
        account = Account(name, email, password, address, account_type)
        account_number = self.bank.add_account(account)
        return f"Account created successfully! Your account number is {account_number}"
    
    def login(self, name, password, account_number):
        account = self.bank.authenticate_user(name, password, account_number)
        if account:
            return account
        return "Invalid login credentials"
