#include<iostream>
#include<cstdlib>
#include<cmath>
#include<unistd.h>

using namespace std;

int Carp(int a , int b){

     return a*b;

}

int main(){

     int a,b;

     int *c = &a;
     int *d = &b;

     int array1[100];
     int array2[200];

     int arrsize1 = sizeof(array1)/sizeof(array1[0]);
     int arrsize2 = sizeof(array2)/sizeof(array2[0]);

     cout << "İlk sayıyı giriniz:";
     cin >> a;

     cout << "İkinci sayıyı giriniz:";
     cin >> b;

     for(int i = 0; i < arrsize1; i++){

        for(int j = 0; j < arrsize2; j++){

            if(array1[i] < array2[i]){

                 cout << "İlk veri değeri:" << (&a)+(a*rand()) << endl;
                 sleep(1);

            }

        //    else if(array1[i] == array2[i]){

          //       cout << "İkinci veri değeri:" << (&b)+(b*rand()) << endl;

         //   }

            else if(array1[i] > array2[i]){

                 cout << "Üçüncü veri değeri:" << (&a)+(b*rand()) << endl;
                 sleep(1);
 
            }

            else if(array1[j] < array2[j]){

                 cout << "Dorduncu veri değeri:" << (&b)+(a*rand()) << endl;
                 sleep(1);

            }

         //   else if(array1[j] == array2[j]){

         //        cout << "Beşinci veri değeri:" << (&a)-(a*rand()) << endl;

         //   }

            else if(array1[j] > array2[j]){

                cout << "Altıncı veri değeri:" << (&b)-(b*rand()) << endl;
                sleep(1);

            }

            else if(array1[i] < array2[j]){

                cout << "Yedinci veri değeri:" << (&a)-(b*rand()) << endl;
                sleep(1);

            }

            else if(array1[i] > array2[j]){

                cout << "Sekizinci veri değeri:" << (&b) - (a*rand()) << endl;
                sleep(1);

            }


        }


     }






     return 0;

}