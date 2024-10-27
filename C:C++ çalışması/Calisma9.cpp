#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(){

     int sayi = 10;

     int *ptr = &sayi;

     cout << "Deneme değeri:" << sayi << endl;
     cout << "Deneme değperi2:" << &sayi << endl;

     cout << "Deneme değeri3:" << *ptr << endl;
     cout << "Deneme değeri4:" << &ptr << endl;

     int a;
     int b;

     int *c = &a;
     int *d = &b;

     cout << "İlk sayiyi giriniz:";
     cin >> a;

     cout << "İkinci sayiyi giriniz:";
     cin >> b;

     cout << "Girilen sayının pointer değeri:" << *c << endl;
     cout << "Girilen ikinci sayının pointer değeri:" << *d << endl;

     cout << "Girilen ilk sayının ikinci pointer değeri:" << &c << endl;
     cout << "Girilen ikinci sayının ikinci pointer değeri:" << &d << endl;

     cout << "Girilen sayıların ilk toplam pointer değeri:" << *c+*d << endl;
  //   cout << "Girilen sayıların ikinci toplam pointer değeri:" << (&c)+(&d) << endl;


     return 0;

    
}
