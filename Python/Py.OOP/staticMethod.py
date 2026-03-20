class Learner:
    @staticmethod  #decorator = allow us to wrap nother function in order to extend the behaviour, without permanently modifying it
    def greet():
        print("Hello world")

l1 = Learner()
l1.greet()

# static ka matlab har new intence ke liye, har nayi object ke liye wo method bar bar create nahi hoga , 
# wo mwthod puri class ke liye common rahe ga, sari object usko use kar sakti hai

