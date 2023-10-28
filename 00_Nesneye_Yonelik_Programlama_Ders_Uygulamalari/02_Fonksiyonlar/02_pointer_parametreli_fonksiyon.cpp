#include <iostream>

using namespace std;
void ortalama(int vize, int *finall)
{
    double ort;
    vize = vize +10;
    *finall =*finall +10;
    ort =vize*0.4+*finall*0.6;
    cout<<"ortalama = "<<ort<<endl;
}

int main(){
    int vize,finall;
    vize = 60;
    finall = 80;
    ortalama(vize,&finall);
    cout<<"vize = "<<vize<<endl;
    cout<<"final ="<<finall<<endl;
    return 0;
}