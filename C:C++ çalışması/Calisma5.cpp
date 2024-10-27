#include<iostream>
#include<cmath>

using namespace std;

int sintopla(float a, float b){

     return sin(a)+sin(b);

}

int costopla(float a , float b){

     return cos(a)+cos(b);

}

int main(){

     float a,b;

     cout << "İlk sayı:";
     cin >> a;

     cout << "İkinci sayı:";
     cin >> b;

     int array[365];

     int arrsize = sizeof(array)/sizeof(array[0]);

     for(int i = 0; i < arrsize; i++){

         if(a < b){

               array[i] = sintopla(a,b);
               cout << "İlk veri:" << array[i] << endl;

         }

         else if(a > b){

               array[i] = costopla(a,b);
               cout << "İkinci veri:" << array[i] << endl;

         }

     }
    

    return 0;

}



