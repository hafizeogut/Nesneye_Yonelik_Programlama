#include <iostream>

using namespace std;

namespace isimuzayi1{
    int a = 5;
}

namespace isimuzayi2{
    double a = 3.1416;
}
int main(){
    cout<<isimuzayi1::a<<endl;
    cout <<isimuzayi2::a<<endl;

    return 0;
}