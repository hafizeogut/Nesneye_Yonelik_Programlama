#include<iostream>

using namespace std;

class Hastane{
    private:
        int id;
        string adi;
    public:
        void kimliklendir(int a,string b){
            id=a;
            adi=b;
        }
        int getId(){
            return id;
        }
};

int main(){
    Hastane h1;
    h1.kimliklendir(25,"Sakarya");
    cout<<h1.getId()<<endl;

    Hastane h2;
    h2.kimliklendir(98, "Sakarya");
    cout<<h2.getId()<<endl;

    Hastane *h3=new Hastane;
    h3->kimliklendir(12,"Bolu");
    cout<<h3->getId()<<endl;

    

}