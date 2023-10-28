 
#include <iostream>    
using namespace std;
int toplama(int &a, int b)
{
    int toplam;   
    toplam=a+b;
    a=a+1;
    return toplam; 
}
int main()
{
    int x, y;   x=5;    y=3;   
     cout<<"toplam="<<toplama(x,y)<<endl;
     cout<<"x="<<x<<endl;
     cout<<"y="<<y<<endl;       
     return 0; 
}