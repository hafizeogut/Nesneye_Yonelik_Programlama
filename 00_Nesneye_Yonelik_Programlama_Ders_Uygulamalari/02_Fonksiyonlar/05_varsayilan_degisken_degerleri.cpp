#include <iostream>

using namespace std;
int divide (int a=8, int b=2)
{
   int r;
   r=a/b;
   return (r);
}
int main ()
{
   cout << divide ( )<<endl;
   cout << divide (12)<<endl;
   cout << divide (21,3)<< endl; 
   return 0; 
}