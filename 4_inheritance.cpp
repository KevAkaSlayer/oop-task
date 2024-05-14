#include <bits/stdc++.h>
using namespace std;
    class Person
    {
        public:
            string name;
            int age;


        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
    };




    class Student : public Person
    {
        public:
            int id;

            Student(string name, int age) : Person(name, age)
            {
                cout << "Student constructor" << endl;
            }
    };

    class Teacher : public Person
    {
        public:
            int salary;
        
            Teacher(string name, int age) : Person(name, age)
            {
                cout << "Teacher constructor" << endl;
            }
    };




int main(){
    
    Student s("Amin", 21);
    s.id = 1234;

    Teacher t("jamal", 45);
    t.salary = 50000;
    
    cout << s.name << " " << s.age << " " << s.id << endl;
    cout << t.name << " " << t.age << " " << t.salary << endl;
    



    return 0;
}