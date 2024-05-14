class Food :
    def __init__(self,name,price) :
        self.name = name
        self.price = price


    def Category(self) :
        print("This is a food item")

class Fruit(Food) :
    def __init__(self,name,price,season) :
        super().__init__(name,price)
        self.season = season

    def Category(self) :
        print("This is a fruit item")
class Vegetable(Food) :
    def __init__(self,name,price,season) :
        super().__init__(name,price)
        self.season = season

    def Category(self) :
        print("This is a vegetable item")
class Meat(Food) :
    def __init__(self,name,price,season) :
        super().__init__(name,price)
        self.season = season

    def Category(self) :
        print("This is a meat item")


fruit1 = Fruit("Apple",10,"Winter")
fruit2 = Fruit("Banana",5,"Summer")
vegetable1 = Vegetable("Carrot",5,"Winter")
vegetable2 = Vegetable("Tomato",3,"Summer")
meat1 = Meat("Beef",20,"All")
meat2 = Meat("Chicken",15,"All")

for x in [fruit1,fruit2,vegetable1,vegetable2,meat1,meat2] :
    print(x.name,x.price,x.season)
    x.Category()
    print()