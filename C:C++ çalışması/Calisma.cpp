#include<iostream>

using namespace std;

int main(){

    int a = 0;
    int b = 0;

    cout << "İlk sayi:";
    cin >> a;

    cout << "ikinci sayi:";
    cin >> b;

    for(int i = 0; i < 100; i++){

          cout << "Sayıların Toplamı:" << a+b << endl;


    }

    for(int i = 0; i < 100; i++){

          cout << "Sayıların Farkı:" << a-b << endl;

    }

    for(int i = 0; i < 100; i++){

          cout << "Sayıların Çarpımı:" << a*b << endl;

    }

    return 0;

}