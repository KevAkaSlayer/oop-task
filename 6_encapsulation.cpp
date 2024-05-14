#include <bits/stdc++.h>
using namespace std;

class Person
{
    private:
        string name;
        int age;

    public:
        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }

        string getName()
        {
            return name;
        }

        int getAge()
        {
            return age;
        }
};

class Student : public Person
{
    private:
        int id;

    public:
        Student(string name, int age, int id) : Person(name, age)
        {
            this->id = id;
        }

        int getId()
        {
            return id;
        }
};

int32_t main(){
    
    
    Student s("Amin", 21, 1234);

    cout << s.getName() << " " << s.getAge() << " " << s.getId() << endl;
    



    return 0;
}