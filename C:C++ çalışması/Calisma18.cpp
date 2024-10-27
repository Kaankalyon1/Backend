#include<iostream>
#include<cstdlib>
#include<cmath>
#include<unistd.h>

using namespace std;

class Sinif1{

     public:

          int SinRandTopla(int a, int b){

             return rand()*(sin(a) + sin(b));

          }

};

class Sinif2{

     public:

          int CosRandTopla(int a ,int b){

              return rand()*(cos(a) + cos(b));

          }

};

class Sinif3{

     public:

           int SinRandCarp(int a, int b){

              return rand() * (sin(a) * sin(b));

           }

};

class Sinif4{

     public:

          int CosRandCarp(int a, int b){

             return rand() * (cos(a) * cos(b));

          }

};

int main(){


            Sinif1 a;
            Sinif2 b;
            Sinif3 c;
            Sinif4 d;


            int x;
            int y;

            cout << "İlk sayıyı giriniz:";
            cin >> x;

            cout << "İkinci sayıyı giriniz:";
            cin >> y;


            int array1[200];
            int array2[400];


            int arrsize1 = sizeof(array1)/sizeof(array1[0]);
            int arrsize2 = sizeof(array2)/sizeof(array2[0]);

            for(int i = 0; i < arrsize1; i++){

                 for(int j = 0; j < arrsize2; j++){

                   // for( ; ; ){

                        if(array1[i] < array2[i]){

                             cout << "Veri1:" << abs(a.SinRandTopla(x,y)) <<  endl;

                        }

                        else if(array1[i] == array2[i]){

                             cout << "Veri2:" << abs(b.CosRandTopla(x,y)) << endl;

                        }

                        else if(array1[i] > array2[i]){

                             cout << "Veri3:" << abs(c.SinRandCarp(x,y)) << endl;

                        }


                  //  }
 

                 }

            }



      return 0;

}