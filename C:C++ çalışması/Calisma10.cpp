#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){

    int a;
    int b;

    int *c = &a;
    int *d = &b;

    cout << "İlk sayıyı giriniz:";
    cin >> a;

    cout << "İkinci sayıyı giriniz:";
    cin >> b;

    if(a < b){

        cout << "Küçük olan ilk pointer değeri:" << *c << endl;
        cout << "Küçük olan ikinci pointer değeri:" << &a << endl;
        cout << "Küçük olan üçüncü pointer değeri:" << &c << endl;
        cout << "Toplam pointer değeri:" << *c+*d << endl;

    }

    else if(a > b){

        cout << "Büyük olan ilk pointer değeri:" << *d << endl;
        cout << "Büyük olan ikinci pointer değeri:" << &b << endl;
        cout << "Küyük olan üçüncü pointer değeri:" << &d << endl;
        cout << "Pointerların çarpımları:" << (*c)*(*d) << endl;

    }

    else{

        cout << "Geçersiz kod" << endl;

    }


    return 0;


    
}