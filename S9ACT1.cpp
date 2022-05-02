#include <iostream>
using namespace std;

int max = 10;
int arreglo[10] = {1,2,3,4,5,6,7,8,9,10};


int main(){

     for (int i = 0; i < 11; i++){
         try
         {
             if (i > 9)
                 throw "Error";
             cout << arreglo[i] << endl;
         }
         catch(const char *msg){
             cout << msg << endl;
         }
     }











}

