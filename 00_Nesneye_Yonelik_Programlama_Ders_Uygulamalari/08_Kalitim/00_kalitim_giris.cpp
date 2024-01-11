#include <iostream>

using namespace std;
class Cokgen{
    protected:
        int genislik,yukseklik;

    public:
        void DegerVer(int a, int b)
        {
            genislik = a;
            yukseklik = b;
        }
        
};

class Dortgen: public Cokgen{
    public:
        int Alan(){
            return genislik*yukseklik;
        }

};

class Ucgen: public Cokgen{
    public:
        int Alan(){
            return (genislik*yukseklik)/2;
        }
};

int main(){
    Dortgen D1;
    Ucgen U1;

    D1.DegerVer(3,4);
    U1.DegerVer(7,2);

    cout << "Dortgen Alan: " << D1.Alan()<<endl;

    cout << "Ucgen Alan: " << U1.Alan()<<endl;
}
