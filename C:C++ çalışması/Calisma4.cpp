#include<iostream>
#include<cmath>

using namespace std;


int sintopla(int a, int b){

     return sin(a)+sin(b);

}


int costopla(int a, int b){

     return cos(a)+cos(b);

}

int main(){

     int x,y;

     cout << "İlk sayıyı giriniz:"; 
     cin >> x;

     cout << "İkinci sayıyı giriniz:";
     cin >> y;

     for(int i = 0; i < 100; i++){
         if(x < y){

              cout << "İlk sayı ikincisinden küçüktür. Sinüslerinin toplamı:" << sintopla(x,y) << endl;

         }

         else if(x > y){

              cout << "İlk sayı ikincisinden büyüktür. Cosinüslerinin toplamı:" << costopla(x,y) << endl;

         }

     
     }




     return 0;

}


