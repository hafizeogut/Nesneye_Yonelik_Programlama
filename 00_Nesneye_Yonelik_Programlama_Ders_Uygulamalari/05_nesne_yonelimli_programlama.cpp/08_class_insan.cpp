#include <iostream>
#include <string>
#include <list>

using namespace std;
class Insan{
    int boy,kilo,yas;
    string ad,tip;

    public:
    void    kimlik(int,int,int,string,string);

    void    sporYap(int);

    int paraKazan(string);
};

void    Insan::kimlik(int x, int y,int z, string isim,string gorev){
    boy =x;
    kilo = y;
    yas = z;
    ad=isim;
    tip=gorev;
}

void    Insan::sporYap(int t){
    cout<<t<< " dakika spor yaptınız"<<endl;
}

int    Insan::paraKazan(string gorev){
    if(gorev=="baba"){
        cout<<"Ev ekmeğe bekler"<<endl;
    }
    else
        cout << "Ekmek bekleyeni yok" << endl;
}

int main()
{
    Insan baba;
    baba.kimlik(175,118,40,"Hafize","Anne");
    baba.sporYap(5);
    baba.paraKazan("kadın");
}
