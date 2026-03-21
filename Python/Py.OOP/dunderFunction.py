class Order:
    def __init__(self,item,price):
        self.item=item
        self.price=price

    def __gt__(self,ord2):
        return self.price > ord2.price

ord1 = Order("Biriyani",360)
ord2 = Order("Ice Cream",69)

if(ord1>ord2):
    print(f"{ord1.item} is more expensive!")
else:
    print(f"{ord2.item} is more expensive!")

