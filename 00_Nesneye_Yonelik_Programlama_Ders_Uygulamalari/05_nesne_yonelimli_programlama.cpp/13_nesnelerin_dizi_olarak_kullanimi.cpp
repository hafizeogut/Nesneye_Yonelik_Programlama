#include <iostream>

using namespace std;


class Dortgen {
    public:
        int x,y;

        void DegerVer(int ,int);

        int Alan(void);
};

void Dortgen::DegerVer(int a, int b){
    x = a;
    y = b;

}

int Dortgen::Alan(void){
    return x*y;
}

int main(){
    Dortgen P1[10];
    P1[0].x=6;
    P1[0].y=8;

    P1[1].DegerVer(7,2);
    cout<<"Alan1: "<<P1[0].Alan()<<endl;
    cout<<"Alan2: "<<P1[1].Alan()<<endl;
}