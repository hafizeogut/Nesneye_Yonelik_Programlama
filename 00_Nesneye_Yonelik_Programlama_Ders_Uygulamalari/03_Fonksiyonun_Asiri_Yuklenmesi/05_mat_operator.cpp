#include <iostream>

using namespace std;

struct Mat{
    int x;
    int y;
}m1;//m1 adında bir örnek tanımlandı.

void operator++(Mat m1)
{
    Mat mr;
    mr.x = (m1.x) +1;
    mr.y = (m1.y) +1;
    cout <<mr.x <<","<<mr.y <<endl;

}

int main()
{
    m1.x =5;
    m1.y = 5;

    ++m1.x;
    cout<<m1.x<<endl;
    ++m1;//m1 yapısındaki iki elemanında 1 artırılması işlemi yapılıyor
    return 0;

}