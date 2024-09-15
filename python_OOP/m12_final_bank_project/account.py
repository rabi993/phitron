

import random

class Account:
    def __init__(self, name, email, password, address, account_type):
        self.name = name
        self.email = email
        self.password = password
        self.address = address
        self.account_type = account_type
        self.account_number = self.generate_account_number()
        self.balance = 0
        self.loan_count = 0
        self.loan_amount = 0
        self.transaction_history = []
        self.transactions_enabled = True  # New attribute for transaction status
        self.loan_enabled = True  # New attribute for loan status
    
    def generate_account_number(self):
        return random.randint(10000000, 99999999)
    
    def deposit(self, amount):
        if not self.transactions_enabled:
            return "Transactions are disabled for this account"
        self.balance += amount
        self.transaction_history.append(f"Deposited {amount}")
        return f"Deposit successful. New balance: {self.balance}"
    
    def withdraw(self, amount):
        if not self.transactions_enabled:
            return "Transactions are disabled for this account"
        if amount > self.balance:
            if self.balance == 0:
                return "Sorry!! The bank will be bankrupt."
            return "Withdrawal amount exceeded"
        else:
            self.balance -= amount
            self.transaction_history.append(f"Withdrew {amount}")
            return f"Withdrawal successful. New balance: {self.balance}"
    
    def transfer(self, amount, target_account):
        if not self.transactions_enabled:
            return "Transactions are disabled for this account"
        if amount > self.balance:
            return "Insufficient balance"
        else:
            self.balance -= amount
            target_account.balance += amount
            self.transaction_history.append(f"Transferred {amount} to account {target_account.account_number}")
            target_account.transaction_history.append(f"Received {amount} from account {self.account_number}")
            return "Transfer successful"
    
    def take_loan(self, loan_amount, bank):
        if not self.loan_enabled:
            return "Loan feature is disabled for this account"
        if self.loan_count >= 2 or not bank.loan_feature:
            return "Loan request denied"
        self.balance += loan_amount
        self.loan_count += 1
        self.loan_amount += loan_amount
        bank.total_loan_amount += loan_amount
        self.transaction_history.append(f"Loan of {loan_amount} taken")
        return "Loan granted"

    def repay_loan(self, amount, bank):
        if amount > self.balance:
            return "Insufficient balance"
        elif amount > self.loan_amount:
            return "Repayment amount exceeds the loan amount"
        else:
            self.balance -= amount
            self.loan_amount -= amount
            bank.total_loan_amount -= amount
            self.transaction_history.append(f"Repaid loan of {amount}")
            return f"Loan repayment successful. Remaining loan amount: {self.loan_amount}"
    
    def get_transaction_history(self):
        return self.transaction_history
    
    def enable_transactions(self):
        self.transactions_enabled = True
        return "Transactions enabled"
    
    def disable_transactions(self):
        self.transactions_enabled = False
        return "Transactions disabled"
    
    def enable_loan(self):
        self.loan_enabled = True
        return "Loan feature enabled"
    
    def disable_loan(self):
        self.loan_enabled = False
        return "Loan feature disabled"
