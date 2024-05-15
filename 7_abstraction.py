from abc import ABC , abstractmethod

class Animal(ABC):
    @abstractmethod
    def eat(self):
        print("Eating")
    

class Monkey(Animal):
    def eat(self):
        print("Monkey is eating")
    
    def sleep(self):
        print("Monkey is sleeping")

nigro  = Monkey()
nigro.eat()