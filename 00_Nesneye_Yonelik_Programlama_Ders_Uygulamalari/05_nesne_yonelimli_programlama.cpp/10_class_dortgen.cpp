#include <iostream>

using namespace std;


class Dortgen{
    private:
        int x,y;

    public:
        void degerVer(int,int);
        int alan(void);

};

void Dortgen :: degerVer(int a,int b){
    x=a;
    y=b;
}

int Dortgen :: alan(void){
    return x*y;
}

int main(){
    Dortgen D1,D2;

    //Aşağıdaki iki satırı sonra siliniz
    // D1.x = 7;//private olduğundan işlem yapılamaz
    // D2.y = 8;

    D1.degerVer(3,5);
    D2.degerVer(7,4);

    cout <<"Alan1: "<<D1.alan()<<endl;
    cout <<"Alan2: "<<D2.alan()<<endl;
    return 0;
}