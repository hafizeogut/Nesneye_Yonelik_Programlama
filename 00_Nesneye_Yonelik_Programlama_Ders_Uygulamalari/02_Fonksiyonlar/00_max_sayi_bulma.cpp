#include<iostream>

using namespace std;

int maksimum(int x, int y, int z);

int main(){
    int a,b,c;

    cout<<"3 tamsayı giriniz:\n";

    cin >>a>>b>>c;
    cout<< "Maksimum : "<< maksimum( a, b, c )<<" dir\n" ;
    return 0;

}

int maksimum(int x, int y, int z)
{
    int maks = x;
    if (y > maks)maks = y;
    if (z>maks) maks = z;
}