class Person:
    def __init__(self,name,age):
        self.name = name 
        self.age = age
    def __str__(self):
        return f"{self.name} {self.age}"

p1 = Person("kevin",27)

p2 = Person("brain",30)
p3 = Person("Mikasa",25)

print(p1)
print(p2)
print(p3)