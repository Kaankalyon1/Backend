#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){

     int a,b;

     int *c = &a;
     int *d = &b;

     cout << "İlk sayiyi giriniz:";
     cin >> a;

     cout << "İkinci sayiyi giriniz:";
     cin >> b;

     if(a < b){

         for(int i = 0; i < 100; i++){

              cout << "İlk pointer deneme verisi değeri:" << &a << endl;
              cout << "İlk pointer verisi değeri:" << (&a)+(a*rand()) << endl;

         }

     }

     else if(a > b){

          for(int j = 0; j < 100; j++){

               cout << "İkinci pointer deneme verisi değeri:" << &b << endl;
               cout << "İkinci pointer verisi değeri:" << (&b)+(b*rand()) << endl;

          }

     }

     else{

          cout << "veri yok" << endl;

     }




     return 0;


}