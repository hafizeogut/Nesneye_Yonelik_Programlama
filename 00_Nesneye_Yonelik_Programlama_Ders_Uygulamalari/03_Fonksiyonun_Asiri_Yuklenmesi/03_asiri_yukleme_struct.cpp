#include<iostream>

using namespace std;

struct Mat{
    int a;
    int b;
};

Mat operator+(Mat x, Mat y)
{
    Mat sonuc;
    sonuc.a = x.a - y.a;
    sonuc.b = x.b -y.b;
    return sonuc;
}

int main(){
    int a,b;
    a = 5;
    b = 4;
    b = b + a;
    cout <<b<<endl;
    Mat m1,m2,m3;
    m1.a=6;
    m1.b = 4;
    m2.a = 3;
    m2.b=5;

    m3 = m1 + m2;
    cout<<m3.a<<","<<m3.b<<endl;
    return 0;
}