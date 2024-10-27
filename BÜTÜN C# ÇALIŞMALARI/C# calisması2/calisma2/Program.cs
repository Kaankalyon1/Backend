using System;

namespace MyFirstApp
{
    class Program
    {
        static void Main(string[] args)
        {

             int[] collection = [360 , 360 , 360];
             int[] collection2 = [720 , 720 , 720];

             Console.Write("Bir sayı giriniz:");
             string input = Console.ReadLine();
             int sayi = int.Parse(input);


             Console.Write("İkinci bir sayı giriniz:");
             string input2 = Console.ReadLine();
             int sayi2 = int.Parse(input2);

             Console.Write("Üçüncü bir sayı daha giriniz:");
             string input3 = Console.ReadLine();
             int sayi3 = int.Parse(input3);


             if(sayi < sayi2 && sayi2 < sayi3){

                foreach(var item in collection){

                     Console.WriteLine("Sayilarin Toplamı:" + (sayi + sayi2 + sayi3));

                }

             }

             else if (sayi > sayi2 && sayi2 > sayi3){

                foreach(var item in collection2){

                    Console.WriteLine("Sayiların Carpımı:" + (sayi * sayi2 * sayi3));

                }

             }

             else {

                 Console.WriteLine("Veri yok");

             }
       


           // Console.WriteLine("Hello World!");
        }
    }
}
