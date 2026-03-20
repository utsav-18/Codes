class Account():
    def __init__(self, Account_Number, balance):
        self.__Account_Number = Account_Number
        self.__balance = balance 

    def credit(self,amount):
        if(amount>0):
            self.__balance+=amount
            print(f"{amount} Credited!! into AC: {self.__Account_Number}")
        else:
            print("Invalid Amount")
    def debit(self,amount):
        if(amount<=self.__balance):
            self.__balance-=amount
            print(f"{amount} Debited!! from AC: {self.__Account_Number}")
        else:
            print("Paisa nahi hai!! , AC: {self.__Account_Number}")
    def check_balance(self):
        return self.__balance


utsav = Account(841226, 42000000)
print(utsav.check_balance())

utsav.debit(200000)
print(utsav.check_balance())


utsav.credit(800000)
print(utsav.check_balance())
