#include <bits/stdc++.h>
using namespace std;

class Animal
{
    public:
        virtual void sound() = 0;

        Animal()
        {
            cout << "Animal constructor" << endl;
        }
};

class Dog : public Animal
{
    public:
        void sound()
        {
            cout << "Dog sound" << endl;
        }

        Dog()
        {
            cout << "Dog constructor" << endl;
        }
};

class Cat : public Animal
{
    public:
        void sound()
        {
            cout << "Cat sound" << endl;
        }

        Cat()
        {
            cout << "Cat constructor" << endl;
        }
};

int32_t main(){
   
    Dog d;
    d.sound();

    Cat c;
    c.sound();




    return 0;
}