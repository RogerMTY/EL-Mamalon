#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "Ingresa el valor de A: " << endl;
    cin >> a;
    cout << "Ingresa el valor de B: " << endl;
    cin >> b;
    int *ptrA;
    int *ptrB;

    ptrA = &a;
    ptrB = &b;

    cout << "Valor de ptrA: " << endl;
    cout << *ptrA << endl;
    cout << "Almacenado en: " << endl;
    cout << ptrA << endl;
    cout << "Valor de ptrB: " << endl;
    cout << *ptrB << endl;
    cout << "Almacenado en: " << endl; 
    cout << ptrB << endl;

}