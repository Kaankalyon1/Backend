#include<iostream>

using namespace std;

int main(){

     int a,b;
     
     cout << "ilk sayiyi giriniz:";
     cin >> a;

     cout << "ikinci sayiyi giriniz:";
     cin >> b;

     cout << "iki sayının toplamı:" << a+b << endl;

     if(a+b < 100) {

          cout << "Girilen sayıların toplamı 100 den küçüktür." << endl;

     }

     else if(a+b > 100){

          cout << "Girilen sayıların toplamı 100 den büyüktür." << endl;

     }

     else if(a+b == 100){

         for( ; ; ){

              cout << "Sonsuz döngü" << endl;

         }

     }



}