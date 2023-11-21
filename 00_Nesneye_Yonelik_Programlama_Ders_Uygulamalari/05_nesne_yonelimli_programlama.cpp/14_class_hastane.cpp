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

    h2.kimliklendir(98, "Sakarya");
    cout<<h2.getId()<<endl;

}