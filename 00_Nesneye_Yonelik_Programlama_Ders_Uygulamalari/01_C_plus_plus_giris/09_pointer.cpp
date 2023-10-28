#include<iostream>

using namespace std;

int main()
{
    int a,b;
    int *p1,*p2;

    a = 10;
    b = 20;
    p1 = &a;// a değişkenin ramadeki adresi
    p2 = &b;//b değişkenin ramdeki adresi

    cout<<"*p1: "<<*p1<<endl;
    cout<<"*p2: "<<*p2<<endl;

    cout<<"&p1: "<<&p1<<endl;
    cout<<"&p2: "<<&p2<<endl;
}