#include <conio.h>  // Konsol giriş çıkış işlemleri için kullanılan kütüphane
#include <iostream> // Temel C++ giriş çıkış işlemleri için kullanılan kütüphane
#include <list>     // Liste veri yapısını kullanmak için kullanılan kütüphane
using namespace std;

// Packet sınıfı, ağdaki iletişimde kullanılan paketleri temsil eder.
class Packet {
    string type; // Paket türü
    int source;  // Kaynak IP adresi
    int dest;    // Hedef IP adresi
    int size;    // Paket boyutu

public:
    // Paket özelliklerini belirten bir fonksiyon
    void degerVer(string t, int s, int d, int sz) {
        type = t;
        source = s;
        dest = d;
        size = sz;
    }

    // Node sınıfının bir üye fonksiyonunu çağıran bir fonksiyon
    void getNodeIp(Node n);
    
    // Node sınıfına özel olmasını sağlamak için friend tanımı
    friend class Node;
};

// Node sınıfı, ağdaki bir düğümü temsil eder.
class Node {
    int ip; // Düğümün IP adresi

public:
    // Düğümün IP adresini ayarlayan bir fonksiyon
    void setValue(int i) {
        ip = i;
    }

    // Bir paketi gönderen bir fonksiyon
    void sendPacket(Packet pt) {
        cout << pt.type << " turunde paket " << pt.source << " kaynagindan" << endl;
        cout << pt.dest << " hedefine gonderilmistir" << endl;
    }

    // Packet sınıfının bir üye fonksiyonunu çağıran bir fonksiyon
    void getNodeIp(Packet p) {
        p.getNodeIp(*this);
    }

    // Packet sınıfına özel olmasını sağlamak için friend tanımı
    friend class Packet;
};

// Packet sınıfının getNodeIp fonksiyonu, bir Node nesnesinin IP adresini ekrana yazdırır.
void Packet::getNodeIp(Node n) {
    cout << "Dugum ip si " << n.ip << endl;
}

int main() {
    // Bir Packet nesnesi oluşturuluyor ve değerleri atanıyor.
    Packet p;
    p.degerVer("routeRequest", 192, 193, 512);

    // İki Node nesnesi oluşturuluyor.
    Node n1, n2;

    // Node'ların IP adresleri atanıyor.
    n1.setValue(192);
    n2.setValue(193);

    // Birinci Node, oluşturulan Packet'i gönderiyor.
    n1.sendPacket(p);

    // Oluşturulan Packet'in getNodeIp fonksiyonu çağrılarak, Node'un IP adresi ekrana yazdırılıyor.
    p.getNodeIp(n1);

    // Konsolu bekletmek için kullanılan fonksiyon
    getch();

    return 0;
}
