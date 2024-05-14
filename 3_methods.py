class Person:
    def __init__(self,name,age):
        self.name = name 
        self.age = age

    def myObj(self):
        print("This is " + self.name + " and he is " + str(self.age) + " years old")

p1 = Person("kevin",27)
p1.myObj()