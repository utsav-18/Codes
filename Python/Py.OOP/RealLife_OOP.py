from abc import ABC, abstractmethod
from datetime import datetime


class PaymentMethod(ABC):
    """Abstract base class for all payment types."""

    @abstractmethod
    def pay(self, amount):
        pass


class UpiPayment(PaymentMethod):
    def __init__(self, upi_id):
        self.upi_id = upi_id

    def pay(self, amount):
        print(f"UPI payment of Rs.{amount} done using {self.upi_id}")


class CardPayment(PaymentMethod):
    def __init__(self, card_last4):
        self.card_last4 = card_last4

    def pay(self, amount):
        print(f"Card payment of Rs.{amount} done with card ending {self.card_last4}")


class CashOnDelivery(PaymentMethod):
    def pay(self, amount):
        print(f"Cash on Delivery selected for Rs.{amount}")


class User:
    """Base class with encapsulated wallet balance."""

    def __init__(self, name, wallet_balance=0):
        self.name = name
        self.__wallet_balance = wallet_balance

    def add_money(self, amount):
        if amount > 0:
            self.__wallet_balance += amount

    def _can_pay(self, amount):
        return self.__wallet_balance >= amount

    def _deduct(self, amount):
        if self._can_pay(amount):
            self.__wallet_balance -= amount
            return True
        return False

    def show_wallet(self):
        print(f"{self.name}'s wallet balance: Rs.{self.__wallet_balance}")


class Customer(User):
    def __init__(self, name, address, wallet_balance=0):
        super().__init__(name, wallet_balance)
        self.address = address


class PremiumCustomer(Customer):
    """Inheritance example: premium users get extra discount."""

    def __init__(self, name, address, wallet_balance=0, premium_discount=10):
        super().__init__(name, address, wallet_balance)
        self.premium_discount = premium_discount


class FoodOrder:
    def __init__(self, customer, items):
        self.customer = customer
        self.items = items
        self.created_at = datetime.now()
        self.status = "Created"

    def total_amount(self):
        return sum(price for _, price in self.items)

    def place_order(self, payment_method):
        amount = self.total_amount()

        if isinstance(self.customer, PremiumCustomer):
            amount -= self.customer.premium_discount

        print("\n--- ORDER SUMMARY ---")
        print(f"Customer : {self.customer.name}")
        print(f"Address  : {self.customer.address}")
        print(f"Items    : {[name for name, _ in self.items]}")
        print(f"Payable  : Rs.{amount}")

        # Polymorphism: same method call, different payment behavior.
        payment_method.pay(amount)

        self.status = "Confirmed"
        print(f"Status   : {self.status}")
        print(f"Time     : {self.created_at.strftime('%d-%m-%Y %I:%M %p')}")


def main():
    items = [
        ("Burger", 120),
        ("Fries", 80),
        ("Cold Coffee", 100),
    ]

    customer_1 = Customer("Utsav", "Noida", wallet_balance=500)
    customer_2 = PremiumCustomer("Ananya", "Delhi", wallet_balance=1000, premium_discount=30)

    order_1 = FoodOrder(customer_1, items)
    order_2 = FoodOrder(customer_2, items)

    upi = UpiPayment("utsav@ybl")
    card = CardPayment("2048")

    order_1.place_order(upi)
    customer_1.show_wallet()

    order_2.place_order(card)
    customer_2.show_wallet()

    cod_order = FoodOrder(customer_1, [("Pizza", 250)])
    cod_order.place_order(CashOnDelivery())


if __name__ == "__main__":
    main()
