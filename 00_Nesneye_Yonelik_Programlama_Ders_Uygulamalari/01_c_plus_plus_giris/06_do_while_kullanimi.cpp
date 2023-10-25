
#include <iostream>
using namespace std;

int main( )
{
    int a,b;
    int *p1,*p2;
    a=10;
    b=20;
    p1=&a; // a değişkeninin ram deki adresini p1(pointer) değişkeninin içine ata
    p2=&b; // 
    cout<<*p1<<endl; // p1 pointerının içindeki //adreste bulunan değeri ekranda gösterir
    cout<<*p2<<endl;
   
  return 0;
}
