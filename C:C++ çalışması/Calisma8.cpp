#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int Sintopla(int a, int b){

    return sin(a)+sin(b);

}

int Costopla(int a , int b){

    return cos(a)+cos(b);

}

int Sincarp(int a , int b){

     return sin(a)*sin(b);

}

int Coscarp(int a, int b){

    return cos(a)*cos(b);

}

int main(){

    int sayi;

    int a;
    int b;

    int array1[100];
    int array2[100];

    int arrsize1 = sizeof(array1)/sizeof(array1[0]);
    int arrsize2 = sizeof(array2)/sizeof(array2[0]);

    cout << "İlk sayiyi giriniz:";
    cin >> a;

    cout << "İkinci sayiyi giriniz:";
    cin >> b;

    for(int i = 0; i < arrsize1; i++){

        for(int j = 0; j < arrsize2; j++){

       // if(a < b){

       //      sayi += array1[i] + sin(a+b);
       //      cout << "İlk veri:" << sayi << endl;

       // }

       // else if(a == b){
//      sayi += array2[i] + cos(a+b);
  //           cout << "İkinci veri:" << sayi << endl;

    //    }

      //  else if(a > b){

        //    sayi += array1[i] + sin(a*b);
          //  cout << "Üçüncü veri:" << sayi << endl;

       // }

        if(array1[i] < array2[i]){

            sayi += array2[i] + Sintopla(a,b);
            cout << "İlk veri:" << sayi << endl;

        }

        else if(array1[i] == array2[i]){

            sayi += array1[i] + Costopla(a,b);
            cout << "İkinci veri:" << sayi << endl;

        }

        else if(array1[i] > array2[i]){

             sayi += array2[i] + Sincarp(a,b);
             cout << "Üçüncü veri:" << sayi << endl;

        }

        else if(array1[j] < array2[j]){

            sayi += array1[j] + Sintopla(a,b);
            cout << "Dördüncü veri:" << sayi << endl;

        }

        else if(array1[j] == array2[j]){

            sayi += array2[j] + Costopla(a,b);
            cout << "Beşinci veri:" << sayi << endl;

        }

        else if(array1[j] > array2[j]){

            sayi += array1[j] + Sincarp(a,b);
            cout << "Altıncı veri:" << sayi << endl;

        }

        else if(array1[i] < array2[j]){

           sayi += array2[i] + Coscarp(a,b);
           cout << "Yedinci veri:" << sayi << endl;

        }

        else if(array1[i] == array2[j]){

           sayi += array1[i] + Sintopla(a,b);
           cout << "Sekizinci veri:" << sayi << endl;

        }

        else if(array1[i] > array2[j]){

            sayi += array2[i] + Sincarp(a,b);
            cout << "Dokuzuncu veri:" << sayi << endl;

        }
    }

    }

    return sayi;


        
}