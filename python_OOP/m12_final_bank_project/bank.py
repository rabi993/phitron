class Bank:
    def __init__(self):
        self.accounts = {}
        self.total_balance = 0
        self.total_loan_amount = 0
        self.loan_feature = True
    
    def add_account(self, account):
        if account.account_number in self.accounts:
            return "Account already exists"
        self.accounts[account.account_number] = account
        return f"Account created successfully with account number {account.account_number}"
    
    def delete_account(self, account_number):
        if account_number in self.accounts:
            del self.accounts[account_number]
            return "Account deleted successfully"
        return "Account not found"
    
    def get_total_balance(self):
        return self.total_balance
    
    def get_total_loan_amount(self):
        return self.total_loan_amount
    
    def toggle_loan_feature(self, status):
        self.loan_feature = status
        return "Loan feature enabled" if status else "Loan feature disabled"
    
    def get_account(self, account_number):
        return self.accounts.get(account_number)
    
    def transfer_money(self, from_account, to_account, amount):
        return from_account.transfer(amount, to_account)
    
    def enable_account_transactions(self, account_number):
        account = self.get_account(account_number)
        if account:
            return account.enable_transactions()
        return "Account not found"
    
    def disable_account_transactions(self, account_number):
        account = self.get_account(account_number)
        if account:
            return account.disable_transactions()
        return "Account not found"
    
    def enable_account_loan(self, account_number):
        account = self.get_account(account_number)
        if account:
            return account.enable_loan()
        return "Account not found"
    
    def disable_account_loan(self, account_number):
        account = self.get_account(account_number)
        if account:
            return account.disable_loan()
        return "Account not found"


    def authenticate_user(self, name, password, account_number):
        account = self.get_account(account_number)
        if account and account.name == name and account.password == password:
            return account
        return None
