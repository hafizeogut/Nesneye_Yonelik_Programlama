#include <iostream>

using namespace std;
//yapisal programlama

void    kostur(string ad, int yas){
    cout<<yas<<" yasindaki ";
    cout<<ad<<" kosuyor "<<endl;
}

int main(){
    string aslanAdi1; 
    string aslanAdi2;
    aslanAdi1="minik"; 
    aslanAdi2="yeleli";

    int aslanyasi1; 
    int aslanyasi2;

    aslanyasi1=12;    
    aslanyasi2=8;
    
    kostur(aslanAdi1,aslanyasi1);
    kostur(aslanAdi2,aslanyasi2);

}