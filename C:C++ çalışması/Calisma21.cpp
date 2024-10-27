#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

class Sinif1{

     public:

          int Deger1(int a){

               return sin(a);

          }

          int Deger2(int a, int b){

               return sin(a)*sin(b);

          }

          int Deger3(int a, int b , int c){

               return sin(a)*sin(b)*sin(c);

          }


};

class Sinif2{

     public:

          int Deger4(int a){

               return cos(a);

          }

          int Deger5(int a, int b){

              return cos(a) * cos(b);

          }

          int Deger6(int a, int b , int c){

              return cos(a) * cos(b) * cos(c);

          }

};

class Sinif3 {

      public:

           int Deger7(int a){

               return sin(a);
                  
           }

           int Deger8(int a, int b){

               return sin(a) + sin(b);

           }
 
           int Deger9(int a, int b, int c){

               return sin(a) + sin(b) + sin(c);

           }

};

class Sinif4{

       public:

           int Deger10(int a){

               return cos(a);

           }

           int Deger11(int a, int b){

               return cos(a) + cos(b);

           }

           int Deger12(int a, int b , int c){

               return cos(a) + cos(b) + cos(c);

           }


};


int main(){

     Sinif1 a;
     Sinif2 b;
     Sinif3 c;
     Sinif4 d;


     int x;
     int y;
     int z;
     int t;

     int array1[100];
     int array2[100];


     int arrsize1 = sizeof(array1)/sizeof(array1[0]);
     int arrsize2 = sizeof(array2)/sizeof(array2[0]);


     cout << "İlk sayiyi giriniz:";
     cin >> x;

     cout << "İkinci sayıyı giriniz:";
     cin >> y;

     cout << "Üçüncü sayiyi giriniz:";
     cin >> z;

     cout << "Dördüncü sayiyi giriniz:";
     cin >> t;


     for(int i = 0; i < arrsize1; i++){

         for(int j = 0; j < arrsize2; j++){

             if(array1[i] < array2[i]){

                  cout << "Veri1:" << a.Deger1(x) << endl;

             }

             else if(array1[i] == array2[i]){

                   cout << "Veri2:" << a.Deger2(x,y) << endl;

             }
       
             else if(array1[i] > array2[i]){

                   cout << "Veri3:" << a.Deger3(x,y,z) << endl;

             }

             else if(array1[j] < array2[j]){

                   cout << "Veri4:" << b.Deger4(x) << endl;
                 
             }

             else if(array1[j] == array2[j]){

                  cout << "veri5:" << b.Deger5(x,y) << endl;

             }

             else if(array1[j] > array2[j]){

                 cout << "Veri6:" << b.Deger6(x,y,z) << endl;

             }

             else if(array1[i] < array2[j]){

                 cout << "Veri7:" << c.Deger7(x) << endl;

             }

             else if(array1[i] == array2[j]){

                 cout << "Veri8:" << c.Deger8(x,y) << endl;

             }

             else if(array1[i] > array2[j]){

                 cout << "Veri9:" << c.Deger9(x,y,z) << endl;

             }

             else if(array1[j] < array2[i]){

                 cout << "Veri10:" << d.Deger10(x) << endl;

             }

             else if(array1[j] == array2[i]){

                 cout << "Veri11:" << d.Deger11(x,y) << endl;

             }

             else if(array1[j] > array2[i]){

                 cout << "Veri12:" << d.Deger12(x,y,z) << endl;

             }


         }


     }





     return 0;


}