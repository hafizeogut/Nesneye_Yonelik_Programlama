
#include <iostream>
#include <string>

using namespace std;

class Oto {
    string marka;
    int model;
    char seg;
    bool uretim;

public:
    // Araba özelliklerini ayarlayan fonksiyon
    void ozYaz(string, int, char, bool);

    // Vergi hesaplayan fonksiyon
    int verHes(int, bool);
};

// Araba özelliklerini ayarlayan fonksiyonun tanımı
void Oto::ozYaz(string a, int b, char c, bool d) {
    marka = a;
    model = b;
    seg = c;
    uretim = d;
}

// Vergi hesaplayan fonksiyonun tanımı
int Oto::verHes(int tr, bool b) {
    int fiat;

    if (b == true) {
        fiat = (tr * 118) / 100;
        return fiat;
    } else {
        fiat = (tr * 125) / 100;
        return fiat;
    }
}

int main() {
    Oto oto; // Araba sınıfından bir nesne oluşturuluyor

    // Araba özellikleri belirleniyor
    oto.ozYaz("Anadol", 1975, 'c', true);

    // Vergi hesaplanıyor ve ekrana yazdırılıyor
    cout << "Ödenecek Vergi: " << oto.verHes(27500, true) << " TL" << endl;

    return 0;
}
