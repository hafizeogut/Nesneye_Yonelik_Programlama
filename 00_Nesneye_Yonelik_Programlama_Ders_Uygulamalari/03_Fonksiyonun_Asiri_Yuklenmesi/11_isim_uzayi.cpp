#include <conio.h> 
#include <iostream>    
using namespace std;

namespace zafer
{
   int a = 5;
}
namespace salih
{
   int a = 6;
}
int main () {
   cout <<"zafer hocanin a degiskeni="<<zafer::a << endl;
   cout <<"salih hocanin a degiskeni="<<salih::a << endl;
   getch();
return 0; 
}
