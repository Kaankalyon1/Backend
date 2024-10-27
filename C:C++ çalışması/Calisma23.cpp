#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int Topla(int x, int y){

     return x+y;

}

double Topla2(double x, double y){

    return x+y;

}

int main(){

     int a,b;

     cout << "İlk sayıyı giriniz:";
     cin >> a;

     cout << "İkinci sayıyı giriniz:";
     cin >> b;


     std::cout << Topla(a,b) << std::endl;
     std::cout << Topla2(a,b) << std::endl;

     return 0;


}