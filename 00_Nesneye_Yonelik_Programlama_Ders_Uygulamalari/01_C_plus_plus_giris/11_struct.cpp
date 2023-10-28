#include<iostream> 
using namespace std;


//"A" adında bir yapı (struct) tanımlar. 
//Bu yapı bir sanal fonksiyon olan f() içerir. 
//Sanal fonksiyonlar, alt sınıflar tarafından geçersiz kılınabilir 
//ve bu nedenle polimorfizm (çok biçimlilik) için kullanılırlar.
struct A{
    virtual void f(){
        cout<<"A::f();\n";
    }
};

int main()
{
    A * a =new A();// bellekte yeni bir "A" nesnesi oluşturur ve bu nesnenin adresini a adlı bir işaretçiye atar.
    //delete a;
    //dinamik olarak oluşturulan "A" nesnesini bellekten temizler. 
    //Bellek sızıntısını önlemek için dinamik olarak oluşturulan nesneleri silmek önemlidir.

    a-> f();
    delete a;
}