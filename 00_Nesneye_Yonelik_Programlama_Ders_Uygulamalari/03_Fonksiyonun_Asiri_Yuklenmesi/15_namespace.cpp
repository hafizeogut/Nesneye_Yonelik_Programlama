#include <iostream>

using namespace std;

namespace zafer
{
    int a = 5;

    int karesi(int a)
    {
        return a*a;

    }
}

namespace salih
{
    double a =6;
    double yazdir(){ return a;}
}

int main()
{
    using namespace zafer;
    cout <<"zafer hocanin a degiskeni="<<a << endl;
    cout <<"karesi "<<karesi(10) << endl;
    cout <<salih::yazdir()<<endl;
}