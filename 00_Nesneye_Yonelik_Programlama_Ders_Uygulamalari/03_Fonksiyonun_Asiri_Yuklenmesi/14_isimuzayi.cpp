#include <iostream>    
using namespace std;

namespace isimuzayi1
{
   int a = 5;
}

namespace isimuzayi2
{
   double a = 3.1416;
}

using namespace isimuzayi1;
int main ()
 {
   cout << a << endl;
   cout << isimuzayi2::a << endl; 
   return 0; 
}
