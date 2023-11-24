#include <iostream>

using namespace std;


class Hesap{
    private:
        string tipi;
        double bakiye;

    public:
        Hesap(){
            tipi = "tanimsiz";
            bakiye = 0;
        }

        void bakiyeEkle(double bakiye){
            this->bakiye = this->bakiye +bakiye;
        }

        double getBakiye(){
            int bakiye = 88;
            return this->bakiye ;

        }

        void adresGoster()
        {
            cout <<this << endl;
        }
        string getTipi()
        {
            return tipi;
        }

            void HesapKarsilastir(Hesap *h1, Hesap *h2)
        {
            if (h1->getBakiye() > h2->getBakiye())
            {
                cout << "h1 > h2" << endl;
            }
            else
            {
                cout << "h2 > h1" << endl;
            }   
        }

};


int main(void)
{
    double sayi;
    Hesap *h1 = new Hesap();
    Hesap *h2 = new Hesap();

    h1->bakiyeEkle(100);
    h2->bakiyeEkle(50);
    h1->adresGoster(); // 0x55555556aeb0
    cout << h1->getTipi() << endl; // h1'in tipini getiriyor.
    cout << h1->getBakiye() << endl;
    cout << h2->getBakiye() << endl;

    h1->HesapKarsilastir(h1,h2);


    return 0;
}
