#include <iostream>

using namespace std;

// Yapi sınıfı tanımlanıyor
class Yapi {
private:
    long a;  // long türünde özel bir değişken
    int b;   // int türünde özel bir değişken

public:
    // size fonksiyonu: bu sınıfın boyutunu hesaplamak için kullanılır
    int size() {
        return 2 * sizeof(int);  // a ve b değişkenlerinin toplam boyutu
    }

    // degerVer fonksiyonu: a ve b değişkenlerine değer atamak için kullanılır
    void degerVer(int x, int y, int z) {
        a = x = y ;  // a ve x değişkenlerine y'nin değeri atanıyor
        b = y;      // b değişkenine y'nin değeri atanıyor
    }
};

int main() {
    Yapi y;        // Yapi sınıfından bir örnek (nesne) oluşturuluyor
    y.degerVer(5, 6, 5);  // degerVer fonksiyonu çağrılarak a ve b değişkenlerine değerler atanıyor
    cout << y.size() << endl;  // size fonksiyonu çağrılarak sınıfın boyutu ekrana yazdırılıyor

    return 0;  // Program başarıyla tamamlandı
}
