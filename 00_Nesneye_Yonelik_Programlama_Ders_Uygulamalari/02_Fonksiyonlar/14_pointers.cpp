#include <iostream>
#include <conio.h>

using namespace std;

double ondalik(double d)
{
    if(d>0)
    {
        while(d>=1)
        {
            d = d-1;
        }
    }
    else{
        while(d<-1)
        {
            d = d+1;
        }
    }
    return d;
}

int main(){
    double d;
    cout <<"ondalikli sayi giriniz ";
    cin >>d;
    cout<<ondalik(d)<<endl;
    return 0;
}