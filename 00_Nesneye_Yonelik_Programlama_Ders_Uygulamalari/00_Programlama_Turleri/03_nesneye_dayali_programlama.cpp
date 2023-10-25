#include <iostream>
#include <conio.h>

using namespace std;
//nesneye yönelik programlama

class Aslan{
    public:
    string aslanAdi;
    int aslanYasi;

    public:
    void    kostur(){
        cout<<aslanYasi<<" yasindaki ";
        cout<<aslanAdi<<" kosuyorr"<<endl;   

    }
};

int main()
{
    Aslan aslan1,aslan2;

    aslan1.aslanAdi = "minik";
    aslan1.aslanYasi = 12;

    aslan2.aslanAdi = "yeleli";
    aslan2.aslanYasi = 5;

    aslan1.kostur();
    aslan2.kostur();
    getch();
    return 0;

}