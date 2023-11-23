#include <iostream>


using namespace std;

class Dortgen{
    public:
        int x,y,gen,yuk;
    
    public:
        //Dikdörtgenin çzellikleri belirlendi
        void degerVer(int a,int b,int g,int h){
            x = a; //x koridnatı:sol üst köşe kordinatı belirlendi
            y = b;//y kordinatı:sol üst köşe kordinatı
            gen = g;//genişlik
            yuk = h;//yukseklik
        }

        //Dikdörthen alanını hedsaplayınız
        int Alan(void){
            return yuk *gen;
        }

        Dortgen *Buyuk(Dortgen &nesne){
            int alan1,alan2;
            alan1=yuk*gen;            //Çağırıldığı nesnenin alanını hesapla
            alan2=nesne.yuk*nesne.gen;//Parametre olarak gelen nesnenin alanını hesaplar


            if (alan1>alan2)
                return this;//kendisini geri döndürür
            
            else   
                return &nesne;

        }
};

int main(){
    Dortgen D1,D2;
    Dortgen *D3;

    D2.degerVer(3,4,7,90);
    D1.degerVer(7,2,65,60);

    cout <<"Alan 1: "<<D1.Alan()<<endl;
    cout<<"Alan 2: "<<D2.Alan()<<endl;

    //D2 nesnesi Buyuk fonksiyonunu Çağırıyor.
    // D1 nesnesi parametre olarak giriyor

    D3=D2.Buyuk(D1);


    cout<<endl;
    cout << "x= "<<D3->x<< " y= " << D3->y<< " Buyuk = " << D3->Alan()<<endl;

}