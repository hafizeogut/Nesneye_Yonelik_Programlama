#include <iostream>

using namespace std;

int main()
{
    int i;
    int *p;
    p = new int[2];

    for(i=0; i<2;i++)
    {
        cout<<"Sayi Giriniz:";
        cin>>p[i];
    }

}
