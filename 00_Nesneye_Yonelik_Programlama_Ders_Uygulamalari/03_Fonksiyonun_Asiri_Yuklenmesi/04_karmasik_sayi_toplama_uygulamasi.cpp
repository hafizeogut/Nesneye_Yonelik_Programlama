#include<iostream>

using namespace std;

//Karmaşık sayıları tanımlamak için bir yapı
struct KarmasikSayi{
    float reel,sanal;
};

//+ operatörünün karmaşık sayıları toplamak için yüklenmesi
KarmasikSayi operator+(const KarmasikSayi &v1, const KarmasikSayi &v2)
{
    KarmasikSayi sonuc;//sonucun yazılacağı yerel değişken
    sonuc.reel = v1.reel+v2.reel; //reel kısımlar toplanıyor
    sonuc.sanal =v1.sanal+v2.sanal;//sanal kısımlar toplanıyor
    return sonuc;//sonuç çağıran programa döndürülüyor
}

void yaz(KarmasikSayi c)
{
    //komplex sayıları yazann print
    cout<<"reel :"<<c.reel <<" sanal :"<<c.sanal<<endl;
}

int main(){
    int a,b;
    a = 5;
    b = 1;
    a = a+b;
    cout <<"a ="<<a<<endl;
    KarmasikSayi c1,c2,c3;
    c1.reel=3;
    c1.sanal = -1;
    c2.reel = 2.5;
    c2.sanal = 0.7;
    c3 = c1 + c2;
    yaz(c3);
    return 0;
}