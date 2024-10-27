#include<iostream>
#include<cstdlib>
#include<cmath>
#include<unistd.h>

using namespace std;

int main(){

     int a,b,sayi;

     cout << "İlk sayıyı giriniz:";
     cin >> a;

     cout << "İkinci sayıyı giriniz:";
     cin >> b;

     int *c = &a;
     int *d = &b;

     int array1[100];
     int array2[100];

     int arrsize1 = sizeof(array1)/sizeof(array1[0]);
     int arrsize2 = sizeof(array2)/sizeof(array2[0]);

     for(int i = 0; i < arrsize1; i++){

          for(int j = 0; j < arrsize2; j++){

            //  for( ; ; ){

              if(array1[i] < array2[j]){

                  cout << "Veri1:" << (&a)+(rand()) << endl;
                  sleep(1);

              }

              else if(array1[i] > array2[j]){

                  cout << "Veri2:" << (&b)+(rand()) << endl;
                  sleep(1);

              }

              else if(array1[j] < array2[i]){

                  cout << "Veri3:" << (&a) << endl;
                  sleep(1);

              }

              else if(array1[j] > array2[i]){

                  cout << "Veri4:" << (&b) << endl;
                  sleep(1);

              }

              else if(array1[i] < array2[j]){

                  cout << "Veri5:" << (&a)+(a+rand()) << endl;
                  sleep(1);

              }

              else if(array1[i] > array2[j]){

                  cout << "Veri6:" << (&b)+(b+rand()) << endl;
                  sleep(1);

              }


          //    }


          }

     }



     return 0;

}