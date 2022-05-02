#include <iostream>
using namespace std;

int main(){
    char string1[] = "Hola Mundo";
    char *ptr = string1;
    cout << string1[0];
    cout << *ptr;
    cout << string1[5] << endl;
    ptr = ptr + 2;
    cout << *ptr;
    cout << string1[7];
    cout << string1[8];
    

}