#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int Topla(int a , int b){

     return a+b;

}

int Cikar(int a, int b){

    return a-b;

}

int Carp(int a, int b){

    return a*b;

}

int main(){

     int sayi;

     int a;
     int b;

     int array1[100];
     int array2[100];
     int array3[100];

     int arrsize1 = sizeof(array1)/sizeof(array1[0]);
     int arrsize2 = sizeof(array2)/sizeof(array2[0]);
     int arrsize3 = sizeof(array3)/sizeof(array3[0]);

     cout << "İlk sayıyı giriniz:";
     cin >> a;

     cout << "İkinci sayıyı giriniz:";
     cin >> b;

    
    if(a < b)

        for(int i = 0; i < arrsize1; i++){
 
                  sayi += array1[i] * sin(Topla(a,b));
                  cout << "İlk veri değeri:" << sayi << endl;

          }
     

     else if(a == b){

          for(int i = 0; i < arrsize2; i++){

               sayi += array2[i] * sin(Cikar(a,b));
               cout << "İkinci veri değeri:" << sayi << endl;

          }

     }

     else if(a > b){

          for(int i = 0; i < arrsize3; i++){

              sayi += array3[i] * sin(Carp(a,b));
              cout << "Üçüncü veri değeri:" << sayi << endl;

          }

     }

     return sayi;

}
