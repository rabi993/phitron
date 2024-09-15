class Transactions:
    def __init__(self):
        self.transaction_log = []

    def log_transaction(self, account, action, amount):
        self.transaction_log.append({
            'account_number': account.account_number,
            'action': action,
            'amount': amount
        })

    def get_transactions(self, account_number):
        return [t for t in self.transaction_log if t['account_number'] == account_number]
