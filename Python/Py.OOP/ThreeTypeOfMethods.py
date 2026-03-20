# Intance Method = self = used to access variables that belongs to the class 
class Student:
    def __init__(self,name):  
        self.name=name

#static method = no self 
class Car:
    @staticmethod
    def start():
        print("Car started!!")
    @staticmethod
    def stop():
        print("Car stopped!!")

#calss method 
class Person:
    name = "anonymous"

    @classmethod
    def changeName(cls,name):
        cls.name = name