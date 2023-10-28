#include <conio.h> 
#include <iostream>    
using namespace std;

namespace zafer
{
   int a = 15;
}
namespace salih
{
   int a = 6;
}

using namespace zafer;
//using namespace salih; hatalı satır
int main () {
    
    cout<<a<<endl;
    cout <<"zafer hocanin a degiskeni="<<zafer::a << endl;
    cout <<"salih hocanin a degiskeni="<<salih::a << endl;
    getch();
    return 0; 
}
