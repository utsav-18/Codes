# Bank Account Implementation in Python

class BankAccount:
    def __init__(self, account_holder: str, initial_balance: float = 0.0):
        """
        Initialize a bank account.
        :param account_holder: Name of the account holder.
        :param initial_balance: Starting balance (default is 0.0).
        """
        if initial_balance < 0:
            raise ValueError("Initial balance cannot be negative.")
        self.account_holder = account_holder
        self.balance = initial_balance

    def deposit(self, amount: float):
        """
        Deposit money into the account.
        :param amount: Amount to deposit.
        """
        if amount <= 0:
            raise ValueError("Deposit amount must be positive.")
        self.balance += amount
        print(f"Deposited ₹{amount:.2f}. New balance: ₹{self.balance:.2f}")

    def withdraw(self, amount: float):
        """
        Withdraw money from the account.
        :param amount: Amount to withdraw.
        """
        if amount <= 0:
            raise ValueError("Withdrawal amount must be positive.")
        if amount > self.balance:
            raise ValueError("Insufficient funds.")
        self.balance -= amount
        print(f"Withdrew ₹{amount:.2f}. New balance: ₹{self.balance:.2f}")

    def get_balance(self) -> float:
        """
        Return the current balance.
        """
        return self.balance

    def __str__(self):
        return f"Account Holder: {self.account_holder}, Balance: ₹{self.balance:.2f}"


# Example usage
if __name__ == "__main__":
    try:
        # Create account
        name = input("Enter account holder name: ").strip()
        initial_balance_input = input("Enter initial balance (₹): ").strip()

        # Validate numeric input
        try:
            initial_balance = float(initial_balance_input)
        except ValueError:
            print("Invalid balance amount. Please enter a number.")
            exit(1)

        account = BankAccount(name, initial_balance)
        print("\nAccount created successfully!")
        print(account)

        # Menu loop
        while True:
            print("\n--- Bank Menu ---")
            print("1. Deposit")
            print("2. Withdraw")
            print("3. Check Balance")
            print("4. Exit")

            choice = input("Enter choice: ").strip()

            if choice == "1":
                try:
                    amount = float(input("Enter deposit amount (₹): "))
                    account.deposit(amount)
                except ValueError as e:
                    print(f"Error: {e}")

            elif choice == "2":
                try:
                    amount = float(input("Enter withdrawal amount (₹): "))
                    account.withdraw(amount)
                except ValueError as e:
                    print(f"Error: {e}")

            elif choice == "3":
                print(f"Current balance: ₹{account.get_balance():.2f}")

            elif choice == "4":
                print("Thank you for banking with us!")
                break

            else:
                print("Invalid choice. Please select 1-4.")

    except ValueError as e:
        print(f"Error creating account: {e}")
