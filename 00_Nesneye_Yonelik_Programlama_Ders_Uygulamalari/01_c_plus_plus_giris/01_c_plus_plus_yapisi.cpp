// Ornek1.cpp
// C++ da genel program yapısı.

#include <iostream>

//Global değişkenler
#define pi 3.14;
const int max=10;
int a,b;
float ort;

int OrtalamaHesapla(int vize1, int final1)
{
  float ortalama;
  ortalama=vize1*0.4+final1*0.6;
  return ortalama;
}  

int main()        // main fonksiyonundan program çalışmaya başlar
{   
    int vize;
    int finall;

   std::cout << "Vize notunu giriniz :";   //Ekrana yaz
   std::cin>>vize;                                   //Klavyeden giriş
   std::cout << "Final notunu giriniz :";
   std::cin>>finall;
   ort=OrtalamaHesapla(vize,finall);
   std::cout << "Ortalama notu =  "<<ort; 
   return 0;   //  programın başarılı bir şekilde 
                    // sonlandığını belirtir.
   
} // main fonksiyonu sonu

