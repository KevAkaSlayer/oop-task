class Animal:
    def __init__(self, name):
        self.name = name
    def talk(self):
        pass

class Cat(Animal):

    def talk(self):
        return 'Meow!'
    
class Dog(Animal):

    def talk(self):
        return 'Woof!'
    

animals = [Cat('Missy'), Cat('Mr. Mistoffelees'), Dog('Lassie')]

for animal in animals:
    print(animal.name + ': ' + animal.talk())
    

# Output:   