class ATM:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance

    def withdraw(self, amount):
        if amount <= 0:
            print("Enter valid amount")
        elif amount <= self.balance:
            self.balance -= amount
            print(f"{self.name} withdrew ₹{amount}")
        else:
            print("Insufficient Balance")

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"{self.name} deposited ₹{amount}")
        else:
            print("Invalid deposit amount")

    def check_balance(self):
        print(f"{self.name}'s Balance: ₹{self.balance}")


# Usage
atm1 = ATM("Utsav", 5000)

atm1.check_balance()
atm1.deposit(1000)
atm1.withdraw(2000)
atm1.check_balance()