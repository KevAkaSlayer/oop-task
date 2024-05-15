#include <bits/stdc++.h>
using namespace std;

class Shape{
    public:
        virtual void draw() = 0;

        Shape(){
            cout << "Shape constructor" << endl;
        }

        void display(){
            cout << "Shape display" << endl;
        }
};

class Triangle : public Shape{
    public:
        void draw(){
            cout << "Triangle draw" << endl;
        }

        Triangle(){
            cout << "Triangle constructor" << endl;
        }
};

class Octagon : public Shape{
    public:
        void draw(){
            cout << "Octagon draw" << endl;
        }

        Octagon(){
            cout << "Octagon constructor" << endl;
        }
};


int32_t main(){
    Triangle t;
    t.draw();
    t.display();
    Octagon o;
    o.draw();
    o.display();
    
    



    return 0;
}