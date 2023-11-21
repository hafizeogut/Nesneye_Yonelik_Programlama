#include <iostream>

using namespace std;

class Kutu{
    private:
        int a,b;

    public:
        void degerVer(int x,int y){
            a = x;
            b = y;
        }
        void degerGoster(){
            cout<<this<<endl;
        }
};

int main(){
    Kutu k1;
    k1.degerVer(5,6);
    cout<<&k1<<endl;
    k1.degerGoster();
    return 0;
}