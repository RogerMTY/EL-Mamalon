#include <iostream>
using namespace std;


class Car{
    public:
        string marca;
        string modelo; 
        int yr;     
};

int main(){
    Car auto1;
    auto1.marca = "Audi";
    auto1.modelo = "A3";
    auto1.yr = 2020;
    cout << endl;
    cout << auto1.marca << " " << auto1.modelo << " " << auto1.yr << endl;

}



