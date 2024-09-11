class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name =holder_name    # public attribute
        self._branch = 'bonani 11'       # protected
        self.__balance = initial_deposit  # private

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance


    def withdraw(self, amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'fokira ! taka nai'

rafsan = Bank('choto bro', 10000)  


print(rafsan.holder_name)
# rafsan.balance =0
# print(rafsan.__balance)
rafsan.holder_name = 'boro vai'
rafsan.deposit(4000)
print(rafsan.get_balance())

print(rafsan.holder_name)

print(rafsan._branch)
rafsan.withdraw(2000)
print(rafsan.withdraw(20000))
print(rafsan.get_balance())

print(dir(rafsan))

print(rafsan._Bank__balance)


