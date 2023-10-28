#include<iostream>

using namespace std; 

namespace isimuzayi1
{
    int x = 4;
    int y =10;
}

namespace isimuzayi2
{
double x = 3.1416;
double y = 2.7183;

}

int main()
{
    using isimuzayi1::x;
    using isimuzayi2::y;
    cout << x << endl;
    cout << y << endl;
    cout << isimuzayi1::y << endl;
    cout << isimuzayi2::x << endl;

    return 0; 

}