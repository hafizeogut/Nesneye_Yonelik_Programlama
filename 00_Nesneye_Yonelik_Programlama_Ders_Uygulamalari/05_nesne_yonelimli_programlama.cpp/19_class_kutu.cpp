#include <iostream>
using namespace std;

class Kutu {
private:
    double uzunluk;
    double genislik;
    double yukseklik;

public:
    // Yapıcı (constructor) metod tanımı
    // Varsayılan parametrelerle çağrılabilecek şekilde değerler atanıyor
    Kutu(double uz = 2.0, double gen = 2.0, double yuk = 2.0) {
        uzunluk = uz;
        genislik = gen;
        yukseklik = yuk;
    }

    // Kutu hacmini hesaplayan metod
    double hacim() {
        return uzunluk * genislik * yukseklik;
    }

    // İki kutunun hacimlerini karşılaştıran metod
    int compare(Kutu k) {
        return this->hacim() > k.hacim();
    }
};

int main() {
    // İki Kutu nesnesi oluşturuluyor ve değerleri atanıyor
    Kutu kt1(9.0, 1.0, 2.0);
    Kutu kt2(3.0, 1.0, 2.0);

    // Kutu hacimlerini karşılaştıran ve sonucunu ekrana yazdıran kod bloğu
    if (kt1.compare(kt2)) {
        cout << "Kutu2 Kutu1 den daha küçüktür" << endl;
    } else {
        cout << "Kutu2 Kutu1'e eşit veya daha büyüktür" << endl;
    }
}
