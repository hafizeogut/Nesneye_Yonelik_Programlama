#include <iostream>

using namespace std;
class Kutu{
    public:
        void adresGoster(){
            cout<<this<<endl;
        }
    
};

int main(){
    Kutu kt1;
    cout<<&kt1<<endl;
    kt1.adresGoster();


}