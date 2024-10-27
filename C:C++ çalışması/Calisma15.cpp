#include<iostream>
#include<cstdlib>
#include<cmath>
#include<unistd.h>


using namespace std;

int main(){

     int a,b,sayi;

     int array1[1000][1000];
     int array2[200][200];


     cout << "İlk sayıyı giriniz:";
     cin >> a;

     cout << "İkinci sayıyı giriniz:";
     cin >> b;

     int arrsize1 = sizeof(array1)/sizeof(array1[0][0]);
     int arrsize2 = sizeof(array2)/sizeof(array2[0][0]);

     for(int i = 1; i < arrsize1; i++){

        for(int j = 1; j < arrsize2; j++){

            if(array1[i][j] < array2[i][j]){

                 sayi += sin(array1[i][j]) + sin(array2[i][j]);
                 cout << "veri1:" << sayi << endl;
                 sleep(1);

            }

            else if(array1[i][j] > array2[i][j]){

                 sayi += cos(array1[i][j]) + cos(array2[i][j]);
                 cout << "veri2:" << sayi << endl;
                 sleep(1);

            }

            else if((array1[i][j] * array2[i][j]) > (array1[i][j] + array2[i][j])){

                  sayi += rand()*sin(array1[i][j]) + rand()*sin(array2[i][j]);
                  cout << "veri3:" << sayi << endl;
                  sleep(1);

            }

            else if((array1[i][j] * array2[i][j]) < (array1[i][j] + array2[i][j])){

                 sayi += rand()*cos(array1[i][j]) + rand()*cos(array2[i][j]);
                 cout << "veri4:" << sayi << endl;
                 sleep(1);

            }

            else if((rand() * array1[i][j]) < (rand() * array2[i][j])){

                 sayi += (rand() + cos(array1[i][j])) * (rand() + sin(array2[i][j]));
                 cout << "veri5:" << sayi << endl;
                 sleep(1);

            }

       //     else if(array1[j][i] < array2[j][i]){

       //          sayi += sin(array1[j][i]) + cos(array2[j][i]);
       //          cout << "veri3:" << sayi << endl;
//     }


        }

     }
    


     return sayi;

}

