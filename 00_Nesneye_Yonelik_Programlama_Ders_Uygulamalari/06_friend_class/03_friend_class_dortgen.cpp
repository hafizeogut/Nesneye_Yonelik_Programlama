#include <iostream>


using namespace std;

class Dortgen{

    private:
        int x,y;

    public:
        void degerVer(int,int);
        int alan();

        //BU fonnksiyon Dörtgen sınıfının arkadaşı
        friend Dortgen dortgenKalfa(Dortgen);

};

void Dortgen :: degerVer(int a, int b){
    x = a;
    y = b;
}

int Dortgen :: alan(){
    return x*y;
}

Dortgen dortgenKalfa(Dortgen D1){
    Dortgen D2;
    D2.x = D1.x*2;
    D2.y =D1.y*2;
    return (D2);

}

int main(){
    Dortgen N1,N2;

    N1.degerVer(3,4);//N1 nesnesinşn x=3,y=4 değerleri atanır
    N2=dortgenKalfa(N1);//N2 nesnesinin x ine 7 ve y sine 2 değeri atanır

    cout << "Alan1: " << N1.alan()<<'\n';
    cout << "Alan2: " << N2.alan()<<endl;

}