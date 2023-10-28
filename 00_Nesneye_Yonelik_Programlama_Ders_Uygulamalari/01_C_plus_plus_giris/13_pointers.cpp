#include<iostream>

using namespace std;

int main(){
    int a;
    int *aPtr;
    a = 7;
    aPtr = &a;

    cout << "a nin adresi : " << &a
        << "\n aPtr degeri : " << aPtr;
    cout << "\n\n a nin degeri : " << a
        << "\n *aPtr nin degeri " << *aPtr;
    cout << "\n\n &*aPtr = " << &*aPtr        // *ve & ikisi birlikte kullanımı 
        << "\n *&aPtr = " << *&aPtr << endl;  // yerleri fark etmez
    return 0; 

}