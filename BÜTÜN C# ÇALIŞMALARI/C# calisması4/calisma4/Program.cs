using System;
using System.Globalization;
using System.Linq;

namespace MyFirstApp
{
    class Program
    {
        static void Main(string[] args)
        {
//Console.WriteLine("Hello World!");

            List<int> numbers1 = new List<int> {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
            int sum1 = numbers1.Sum();

            List<int> numbers2 = new List<int> {2 , 4 , 6 , 8 , 10};
            int sum2 = numbers2.Sum();


            List<int> numbers3 = new List<int> {3 , 6 , 9};
            int sum3 = numbers3.Sum();
    

            Console.Write("Bir sayı giriniz:");
            string input1 = Console.ReadLine();
            int sayi1 = int.Parse(input1);


            Console.Write("Bir sayı daha giriniz:");
            string input2 = Console.ReadLine();
            int sayi2 = int.Parse(input2);


            Console.Write("Üçüncü bir sayıyı giriniz:");
            string input3 = Console.ReadLine();
            int sayi3 = int.Parse(input3);


            if(sayi1 + sayi2 < sayi3){

                foreach(var number1 in numbers1){
                
                     Console.WriteLine("Rastgele veri değeri:" + sum1);

            }

            }

            else if(sayi1 + sayi2 > sayi3){

                 foreach(var number2 in numbers2){

                      Console.WriteLine("Rastgele veri değeri2:" + sum2);

                 }

            }

            else if(sayi1 * sayi2 < sayi3){

                  foreach(var number3 in numbers3){

                      Console.WriteLine("Rastgele veri değeri3:" + sum3);

                  }

            }



        }
    }
}
