#include <iostream>

using namespace std;

void yaz();
void yaz(char ch);
void yaz(char ch,int n);
int main(){
    yaz();
    yaz('=');
    yaz('+',30);
    return 0;
}

void yaz(){
    for (int j=0; j<45;j++)
    {
        cout<<'*';
        
    }
    cout<<endl;
}
void yaz(char ch){
    for (int j=0; j<45;j++)
    {
        cout<<ch;
    }
    cout<<endl;
}

void yaz(char ch,int n){
    for (int j=0; j<n;j++)
    {
        cout<<ch;
    }
    cout<<endl;
}