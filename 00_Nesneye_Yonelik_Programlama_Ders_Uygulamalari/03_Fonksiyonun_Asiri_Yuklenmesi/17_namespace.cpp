#include <iostream>
using namespace std;

namespace isimuzayi1
{
int x = 5;
int y = 10;
}

namespace isimuzayi2
{
double x = 3.1416;
double y = 2.7183;

}

int main () 
{
 {
  using namespace isimuzayi1;
  cout << x << endl;
  cout << y << endl;
 }

 {
  using namespace isimuzayi2;
  cout << y << endl;
  cout << x << endl;
 }

return 0; 
}
