#include <bits/stdc++.h>
using namespace std;

class Car{
    public : 
        string brand;
        int price; 
};



int main(){
    Car obj;

    obj.brand = "MERCEDES";
    obj.price = 5000000;

    cout << obj.brand << endl;
    cout << obj.price << endl;
    Car obj2;

    obj2.brand = "NISSAN";
    obj2.price = 3000000;

    cout << obj2.brand << endl;
    cout << obj2.price << endl;

    return 0;
}