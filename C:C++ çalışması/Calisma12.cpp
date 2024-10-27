#include<iostream>
#include<cstdlib>
#include<cmath>
#include<unistd.h>

using namespace std;


int main(){

     int a;
     int b;

     int *c = &a;
     int *d = &b;

     cout << "İlk sayıyı giriniz:";
     cin >> a;

     cout << "İkinci sayıyı giriniz:";
     cin >> b;

     if(a < b){

         for(int i = 0; i < 100; i++){

              cout << "İlk pointer verisi değeri:" << (&a)+(a*rand()) << endl;
              sleep(1);

         }

     }

     else if(a > b){

         for(int j = 0; j < 100; j++){

             cout << "İkinci pointer verisi değeri:" << (&b)+(b*rand()) << endl;
             sleep(1);

         }

     }

     else{

          cout << "Geçersiz veri" << endl;
           
     }


     return 0;

}