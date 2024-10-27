#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int SinTopla(int a, int b){

     return sin(a)+sin(b);

}

int CosTopla(int a , int b){

     return cos(a)+cos(b);

}

int SinCarp(int a, int b){

     return sin(a)*sin(b);

}

int CosCarp(int a, int b){

    return cos(a)*cos(b);

}


int main(){


    int sayi;

    int a;
    int b;
    int c;

    int array1[100];
    int array2[200];
    int array3[300];

    int arrsize1 = sizeof(array1)/sizeof(array1[0]);
    int arrsize2 = sizeof(array2)/sizeof(array2[0]);
    int arrsize3 = sizeof(array3)/sizeof(array3[0]);

    cout << "İlk sayiyi giriniz:";
    cin >> a;

    cout << "İkinci sayiyi giriniz:";
    cin >> b;

    cout << "Üçüncü sayiyi giriniz:";
    cin >> c;

    if(a < b && a < c){
        
        for(int i = 0; i < arrsize1; i++){

             sayi += array1[i]*rand() + SinTopla(a,b);
             cout << "İlk veri:" << sayi << endl; 

        }
        
    }

    else if(a == b && a == c){

        for(int j = 0; j < arrsize2; j++){

            sayi += array2[j]*rand() + CosTopla(a,b);
            cout << "İkinci Veri:" << sayi << endl;

        }

    }

    else if(a > b && a > c){

         for(int k = 0; k < arrsize3; k++){

            sayi += array3[k]*rand() + SinCarp(a,b);
            cout << "Üçüncü Veri:" << sayi << endl; 

         }

    }

    else if(b < c && a < c){

         for(int l = 0; l < arrsize1; l++){

             sayi += array1[l]*rand() + CosCarp(b,c);
             cout << "Dördüncü Veri:" << sayi << endl;

         }

    }

    else if(b == c){

         for(int m = 0; m < arrsize2; m++){

              sayi += array2[m]*rand() + SinTopla(b,c);
              cout << "Beşinci Veri:" << sayi << endl;

         }

    }

    else if(b > c){

        for(int n = 0; n < arrsize3; n++){

            sayi += array3[n]*rand() + CosTopla(b,c);
            cout << "Altıncı Veri:" << sayi << endl;

        }

    }


    else if(a < c){

        for(int i = 0; i < arrsize1; i++){

            sayi += array1[i]*rand() + SinCarp(a,c);
            cout << "Yedinci Veri:" << sayi << endl;

        }

    }

    else if(a == c){

         for(int i = 0; i < arrsize1; i++){

            sayi += array2[i]*rand() + CosCarp(a,c);
            cout << "Sekizinci Veri:" << sayi << endl;

         }

    }


     return 0;

    
}