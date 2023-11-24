#include <iostream>

using namespace std;

class sinifA{
    private:
        int ax,bx;

    public:
        sinifA (int a,int b){
            ax=a;
            bx=b;
        }
        void size(){
            cout<<ax*bx<<endl;
        }
        friend class SinifB;
};

class SinifB{
    int bx,by,bz;
    public:
        void size(sinifA s){
            bx =s.ax;
            by = s.bx;
            bz=2;
            cout<<bx*by*bz<<endl;
        }
};

int main(){
    sinifA nesneA(5,2);
    nesneA.size();
    SinifB nesneB;
    nesneB.size(nesneA);
}

