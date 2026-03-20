class Learner:
    @staticmethod  #decorator = allow us to wrap nother function in order to extend the behaviour, without permanently modifying it
    def greet():
        print("Hello world")

l1 = Learner()
l1.greet()