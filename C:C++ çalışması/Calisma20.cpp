#include<iostream>
#include<cstdlib>
#include<cmath>
#include<unistd.h>

using namespace std;

class Sinif1{

    public:
        
        int Deger1(int a){

              return sin(a);

        }

        int Deger2(int a, int b){

               return sin(a) + sin(b);

        }

        int Deger3(int a, int b , int c){

              return sin(a) + sin(b) + sin(c);

        }

};


int main(){

     Sinif1 a;

     int x;
     int y;
     int z;

     int array1[100];
     int array2[100];

     int arrsize1 = sizeof(array1)/sizeof(array1[0]);
     int arrsize2 = sizeof(array2)/sizeof(array2[0]);

     cout << "İlk sayıyı giriniz:";
     cin >> x;

     cout << "İkinci sayıyı giriniz:";
     cin >> y;

     cout << "Üçüncü sayıyı giriniz:";
     cin >> z;

     for(int i = 0; i < arrsize1; i++){

         if(array1[i] < array2[i]){

              cout << "İlk veri:" << a.Deger1(x) << endl;
              sleep(1);

         }

         else if(array1[i] == array2[i]){

             cout << "İkinci veri:" << a.Deger2(x,y) << endl;
             sleep(1);


         }

         else if(array1[i] > array2[i]){

             cout << "Üçüncü veri:" << a.Deger3(x,y,z) << endl;
             sleep(1);

         }

     }



     return 0;


}

