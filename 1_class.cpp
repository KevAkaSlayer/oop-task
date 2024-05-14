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

    return 0;
}