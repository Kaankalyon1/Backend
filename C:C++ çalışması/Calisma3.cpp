#include<iostream>
#include<cmath>

using namespace std;

int main(){

     int a,b;

     cout << "İlk sayi:"; 
     cin >> a;

     cout << "ikinci sayi:";
     cin >> b;


     if(a < b){

         cout << "Girdiğiniz ilk sayı ikincisinden küçğktür." << endl;

     }

     else if(a == b){

          cout << "Girdiğiniz iki sayıda birbirine eşittir." << endl;

     }

     else if(a > b){

          cout << "Girdiğiniz ilk sayı ikincisinden büyüktür." << endl;

     }


     cout << "İki sayının toplamları:" << (a+b) << endl;
     cout << "İki sayının sinüslerinin toplamları:" << (sin(a)+sin(b)) << endl;
     cout << "İki sayının cosinüslerinin toplamları:" << (cos(a)+cos(b)) << endl;


     return 0;


}
