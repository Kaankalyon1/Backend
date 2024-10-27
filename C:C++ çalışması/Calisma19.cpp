#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

class Sinif1{

     public:

         int SinDeger(int a){

              return sin(a);

         }

};

class Sinif2{

     public:

         int SinDeger2(int a, int b){

             return sin(a) + sin(b);

         }

};

class Sinif3{

     public:

         int SinDeger3(int a , int b , int c){

             return sin(a) + sin(b) + sin(c);

         }

};



int main(){


      Sinif1 x;
      Sinif2 y;
      Sinif3 z;


      int c;
      int d;
      int e;

      cout << "İlk sayıyı giriniz:";
      cin >> c;

      cout << "İkinci sayıyı giriniz:";
      cin >> d;

      cout << "Üçüncü sayıyı giriniz:";
      cin >> e;


      cout << "İlk değer:" << x.SinDeger(c) << endl;
      cout << "İkinci değer:" << y.SinDeger2(c,d) << endl;
      cout << "Üçüncü deger:" << z.SinDeger3(c,d,e) << endl;


     return 0;

}


