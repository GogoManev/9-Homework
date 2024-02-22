class BankAccount:
    def __init__(self, owner, balance=0):
        self.__owner = owner
        self.__balance = balance

    def deposit(self, amount):
        self.__balance += amount

    def withdraw(self, amount):
        if amount <= self.__balance:
            self.__balance -= amount
        else:
            print("U got n0 m0neyz")

    def get_balance(self):
        print("Balance:", self.__balance)


username = "Gosho Mercedesa"
BGN = 1000
print('\n' + username)
GoshoBankAccount = BankAccount(username, BGN)
GoshoBankAccount.get_balance()
GoshoBankAccount.deposit(200)
GoshoBankAccount.get_balance()
GoshoBankAccount.withdraw(934)
GoshoBankAccount.get_balance()
GoshoBankAccount.withdraw(1000)

username2 = "Stefan Mentata"
print('\n' + username2)
StefanBankAccount = BankAccount(username2)
StefanBankAccount.deposit(2)
StefanBankAccount.get_balance()
StefanBankAccount.deposit(1)
StefanBankAccount.get_balance()
StefanBankAccount.deposit(5)
StefanBankAccount.get_balance()
