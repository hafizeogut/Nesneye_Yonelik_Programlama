#include <iostream>
using namespace std;

int main ()
{
int i,n;
int * p;
cout << "Kac sayi gireceksiniz ? ";
cin >> i;
p= new int[i];

if (p == 0)  
    cout << "Hata: bellekten yer alınamadı";
else
    {
     for (n=0; n<i; n++)
          {
            cout << "Sayi gir: ";
            cin >> p[n];
          }
     cout << "Girdiginiz sayilar: ";
     for (n=0; n<i; n++) cout << p[n] <<", ";  //for döngüsü içinde sadece cout var.
     delete[] p;     //bu komut for dongusune dahil değil
    }
return 0; 
}
