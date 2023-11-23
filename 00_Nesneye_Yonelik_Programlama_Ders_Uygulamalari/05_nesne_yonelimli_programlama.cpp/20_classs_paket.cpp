 
#include <iostream>
using namespace std;

// Packet sınıfı tanımlanıyor
class Packet {
private:
    string type;   // Paketin tipini tutan özellik
    int source;    // Paketin kaynak adresini tutan özellik
    int dest;      // Paketin hedef adresini tutan özellik
    int size;      // Paketin boyutunu tutan özellik

public:
    // Paket özelliklerine değer atayan metod
    void setValue(string, int, int, int);
    // İki paketi karşılaştırarak maksimum boyuta sahip olanı belirleyen metod
    void getMaxSize(Packet, Packet);
    // void getMaxSize(Packet); // Bu satırın açıklaması
};

// Paket sınıfının özelliklerini atayan metod
void Packet::setValue(string t, int s, int d, int sz) {
    type = t;
    source = s;
    dest = d;
    size = sz;
}

// İki paketi karşılaştırarak maksimum boyuta sahip olanı ekrana yazdıran metod
void Packet::getMaxSize(Packet pt1, Packet p) {
    if (pt1.size >= p.size)
        cout << pt1.type << " " << pt1.source << " " << pt1.dest << " " << pt1.size << endl;
    else
        cout << p.type << " " << p.source << " " << p.dest << " " << p.size << endl;
}

int main() {
    Packet p1, p2;  // İki Packet nesnesi oluşturuluyor

    // İlk paketin özellikleri belirleniyor
    p1.setValue("data", 192, 193, 512);

    // İkinci paketin özellikleri belirleniyor
    p2.setValue("routeRequest", 193, 194, 56);

    

    // İki paketi karşılaştırarak maksimum boyuta sahip olanı ekrana yazdıran metod
    p2.getMaxSize(p1, p2); 
     // p1.getMaxSize(p2);//this



    // Program başarıyla tamamlandı
    return 0;
}
