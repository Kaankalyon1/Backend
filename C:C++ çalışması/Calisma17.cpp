#include<iostream>
#include<cstdlib>
#include<cmath>
#include<unistd.h>

using namespace std;

class Sinif1{

      public:

          int SinTopla(int a, int b){

              return sin(a) + sin(b); 

          }

          int CosTopla(int a, int b){

              return cos(a) + cos(b);

          }

};

class Sinif2 : public Sinif1{

      public:

           int SinCarp(int a , int b){

                return sin(a) * sin(b);

           }

           int CosCarp(int a , int b){

                return cos(a) * cos(b);

           }

};

class Sinif3 : public Sinif2{

      public:

           int ToplaSin(int a , int b){

               return sin(a+b);

           } 

           int ToplaCos(int a, int b){

               return cos(a+b);

           }

};

class Sinif4 : public Sinif3{

      public:

          int CarpSin(int a, int b){

               return sin(a*b);

          } 

          int CarpCos(int a ,int b){

              return cos(a*b);

          }

};



int main(){


     Sinif1 x;
     Sinif2 y;
     Sinif3 z;
     Sinif4 t;

     int a;
     int b;

     int array1[1000];
     int array2[1000];

     int arrsize1 = sizeof(array1)/sizeof(array1[0]);
     int arrsize2 = sizeof(array2)/sizeof(array2[0]);

     cout << "İlk sayıyı giriniz:";
     cin >> a;

     cout << "İkinci sayıyı giriniz:";
     cin >> b;

     for(int i = 0; i < arrsize1; i++){

        for(int j = 0; j < arrsize2; j++){

             if(array1[i] < array2[i]){

                 cout << "Veri1:" << abs(a*rand()*sin(array1[i])) << endl;
                // sleep(1);

             } 

             else if(array1[i] == array2[i]){

                 cout << "Veri2:" << abs(a*rand()*cos(array2[i])) << endl;
                // sleep(1);

             }

             else if(array1[i] > array2[i]){

                 cout << "Veri3:" << abs(a*rand()*sin(array2[j])) << endl;
                // sleep(1);

             }

             else if(array1[j] < array2[j]){

                 cout << "Veri4:" << abs(a*rand()*cos(array1[j])) << endl;
                // sleep(1);

             }

             else if(array1[j] == array2[j]){

                 cout << "Veri5:" << abs(b*rand()*sin(array1[i])) << endl;
               //  sleep(1);

             }

             else if(array1[j] > array2[j]){

                 cout << "Veri6:" << abs(b*rand()*cos(array2[i])) << endl;
                // sleep(1);

             }


             else if(array1[i] < array2[j]){

                 cout << "Veri7:" << abs(x.SinTopla(a,b)) << endl;
                 sleep(1);

             }

             else if(array1[i] == array2[j]){

                 cout << "Veri8:" << abs(y.CosTopla(a,b)) << endl;
                 sleep(1);

             }

             else if(array1[i] > array2[j]){

                 cout << "Veri9:" << abs(z.SinCarp(a,b)) << endl;
                 sleep(1);

             }
    

        }

     }



     return 0;

}
