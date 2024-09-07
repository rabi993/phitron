class bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 10000


    def get_balance(self):
        return self.balance
    def deposit(self, amount):
        if amount > 0:
            self.balance += amount

    def withdraw(self, amount):
        if amount < self.min_withdraw:
            # return f'fokira. you can withdraw below{self.min_withdraw}'
            print( f'fokira. you can withdraw below {self.min_withdraw} takaa')
        elif amount >self.max_withdraw:
            # return f'bank fokir hoye jabe. you cannot withdraw more than {self.max_withdraw}'
            print (f'bank fokir hoye jabe. you cannot withdraw more than {self.max_withdraw} taka')
        else:
            self.balance -= amount
            # return f'Here is your money {self.balance}'
            print( f'Here is your money {self.balance} taka')
            print(f'Your balance after withdraw: {self.balance} taka')
            print(f'Your balance after withdraw: {self.get_balance()} taka')

        
brac = bank(1500)
brac.withdraw(25)
brac.withdraw(5000000)
brac.withdraw(1000)

Dbbl = bank(5000)
Dbbl.deposit(2000)
Dbbl.deposit(2000)

print(Dbbl.get_balance())