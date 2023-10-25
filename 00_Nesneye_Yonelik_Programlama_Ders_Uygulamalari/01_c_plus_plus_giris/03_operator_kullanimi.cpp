//Vize ve final notlarinindan geçme notunu hesaplama
#include <iostream> 
using namespace std; 
int main()
{
    int vize, finall;
    double ort;      
    vize = 43;             //atama operatörü
    finall = 80;
    ort = vize * 0.4 + finall * 0.6;  //Çarpma ve toplama operatörü
    cout<< "Gecme notunuz: " << ort;   
    if(ort>=65){//Karşılaştırma operatörü
        cout<<"\nGectiniz \n";
    }     
    else if(ort<65){ 
        cout<<"\nKaldiniz\n";
    } 
    return 0;
}
