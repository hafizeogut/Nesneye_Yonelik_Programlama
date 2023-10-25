#include <iostream>
#include <conio.h>
using namespace std;

struct Aslan
{
    string aslanAdi; 
    int aslanYasi;


    void    kostur(){
        cout<<aslanYasi<<"  yasindaki ";
        cout<<aslanAdi<<"  kosuyorr"<<endl;
    }
};


int main()
{
    Aslan aslan1,aslan2;

    aslan1.aslanAdi = "minik";
    aslan1.aslanYasi = 12;

    aslan2.aslanAdi = "yeleli";
    aslan2.aslanYasi = 8;

    aslan1.kostur();
    aslan2.kostur();

    getch();
}