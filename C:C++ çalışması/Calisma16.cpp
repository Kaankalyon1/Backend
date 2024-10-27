#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

class Sinif{

     public:
        int Topla(int a, int b){

             return a+b;

        }


};

class Sinif2 : public Sinif{

     public:
        int Carp(int a, int b){

              return a*b;

        }

};

class Sinif3 : public Sinif2{

      public:
          float SinTopla(int a ,int b){

               return sin(a) + sin(b);

          }

};

class Sinif4 : public Sinif3{

      public:
          float SinCarp(int a, int b){

              return sin(a) * sin(b);

          }

};


class Sinif5 : public Sinif4{

      public:
           float CosTopla(int a, int b){

               return cos(a) + cos(b);

           }
        

};

class Sinif6 : public Sinif5{

      public:
           float CosCarp(int a , int b){

                return cos(a) * cos(b);

           }
};


int main(){

          Sinif x;
          Sinif2 y;
          Sinif3 z;
          Sinif4 t;
          Sinif5 w;
          Sinif6 o;

          int a;
          int b;

          int array1[200];
          int array2[300];

          int arrsize1 = sizeof(array1)/sizeof(array1[0]);
          int arrsize2 = sizeof(array2)/sizeof(array2[0]);

          cout << "İlk sayıyı giriniz:";
          cin >> a;

          cout << "İkinci sayıyı giriniz:";
          cin >> b;


          for(int i = 0; i < arrsize1; i++){

              for(int j = 0; j < arrsize2; j++){

                   if(array1[i] < array2[i]){

                         cout << "veri1:" << sin(a) * array1[i] << endl;

                   }

                   else if(array1[i] == array2[i]){

                         cout << "veri2:" << sin(b) * array2[i] << endl;

                   }

                   else if(array1[i] > array2[i]){

                         cout << "veri3:" << cos(a) * array1[j] << endl;

                   }

                   else if(array1[j] < array2[j]){

                        cout << "veri4:" << cos(b) * array2[j] << endl;

                   }

                   else if(array1[j] == array2[j]){

                        cout << "veri5:" << sin(a) * array1[j] << endl;

                   }

                   else if(array1[j] > array2[j]){

                        cout << "veri6:" << sin(b) * array2[j] << endl;

                   }

               

              }

          }




          cout << "İlk veri:" << x.Topla(a,b) << endl;
          cout << "İkinci veri:" << y.Carp(a,b) << endl;
          cout << "Üçüncü veri:"<< z.SinTopla(a,b) << endl;  
          cout << "Dördüncü veri:" << t.SinCarp(a,b) << endl;
          cout << "Beşinci veri:" << w.CosTopla(a,b) << endl;
          cout << "Altıncı veri:" << o.CosCarp(a,b) << endl;


      return 0;
   

}