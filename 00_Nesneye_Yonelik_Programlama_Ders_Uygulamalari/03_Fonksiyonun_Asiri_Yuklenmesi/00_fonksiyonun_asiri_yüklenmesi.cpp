#include <iostream>

using namespace std;

void print(){
    cout<<"printed "<<endl;
}

void print(char c,int a)
{
    for(int i = 0; i<a;i++)
    {
        cout<<c<<endl;
    }
}
int main(){
    print();
    print('a',6);
    return 0;
}