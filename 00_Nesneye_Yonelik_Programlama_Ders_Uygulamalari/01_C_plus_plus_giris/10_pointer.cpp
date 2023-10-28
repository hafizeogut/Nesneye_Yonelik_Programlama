#include<iostream>

using namespace std;

int main(){
    int *p1;
    int a;
    p1 =&a;

    *p1 =3;

    cout<<*p1<<endl;
}