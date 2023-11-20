/*Public: Sınıf içindeki değişkenler ve fonksiyonlar bu sınıf içinden kullanılabileceği gibi dışardan da erişilip kullanılabilir.

Private: Sınıfın üye verilerine sadece o sınıfın üye fonksiyonları ve o sınıfın  arkadaş(friend) sınıfları erişip kullanabilir. Sınıfın üyeleri dışardan erişime kapalıdır. 
Protected: Sınıfın kendi üyeleri, arkadaş sınıflar ve bu sınıftan türetilen nesneler  sınıfın üyelerine erişebilir. 
*/
//Herhangi bir belirleyici kullanılmamış ise varsayılan olarak sınıfın üyeleri private tır.
#include<iostream>

using namespace std;


struct Yapi{
    int a;
    int b;
    int size(){
        return 2*sizeof(int);
    }
};

int main(){
    Yapi y;
    y.a=12;
    y.b=16;

    y.a = 25;
    cout<<y.size()<<endl;


}