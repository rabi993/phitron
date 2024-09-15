

from account import Account

class Admin:
    def __init__(self, bank):
        self.bank = bank
        self.name = "admin"
        self.password = "admin"
        self.email = "admin@gmail.com"
    
    def login(self, name, password):
        if self.name == name and self.password == password:
            return True
        return False
    
    def create_account(self, name, email, password, address, account_type):
        return self.bank.add_account(Account(name, email, password, address, account_type))
    
    def delete_account(self, account_number):
        return self.bank.delete_account(account_number)
    
    def get_all_accounts(self):
        return self.bank.accounts
    
    def check_total_balance(self):
        return self.bank.get_total_balance()
    
    def check_total_loan_amount(self):
        return self.bank.get_total_loan_amount()
    
    def toggle_loan_feature(self, status):
        return self.bank.toggle_loan_feature(status)
    
    def show_user_transaction_history(self, account_number):
        account = self.bank.accounts.get(account_number)
        if account:
            history = account.get_transaction_history()
            if history:
                return "\n".join(history)
            else:
                return "No transactions found for this user."
        else:
            return "Account not found."
    
    def enable_account_transactions(self, account_number):
        return self.bank.enable_account_transactions(account_number)
    
    def disable_account_transactions(self, account_number):
        return self.bank.disable_account_transactions(account_number)
    
    def enable_account_loan(self, account_number):
        return self.bank.enable_account_loan(account_number)
    
    def disable_account_loan(self, account_number):
        return self.bank.disable_account_loan(account_number)
