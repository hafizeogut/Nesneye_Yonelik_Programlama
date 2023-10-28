//toplam.cpp
//for döngüsüyle 1 den 100 e kadar
// sayıların toplamını bulan program.
#include <iostream>

using namespace std;
int main()
{
    int top;

    top=0;

    for (int j=1; j<=100; j++)
    {
        top=top+j;
    }
    cout<<"toplam = "<< top;
    return 0;

}  
