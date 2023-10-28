#include <iostream>

using namespace std;

int rcv(){
    int b;
    int *x = 0;

    x = &b;
    *x =3;
    return *x;
}
int main(){
    cout<<rcv();
    return 0;
}