#include <iostream>


using namespace std;


class Dortgen{
    private:
        int gen,yuk;

    public:
        void degerAta(int g,int y){
            gen=g;
            yuk=y;
        }
        int alan(){
            return gen* yuk;
        }
        friend class Dortgen kopyala(Dortgen);


};
Dortgen kopyala(Dortgen drt){
    Dortgen d;
    d.gen = drt.gen;
    d.yuk = drt.yuk;
    return d;
}
int main(){

    Dortgen d1,d2;
    d1.degerAta(1,2);
    d2=kopyala(d1);

    cout<<d2.alan();
}