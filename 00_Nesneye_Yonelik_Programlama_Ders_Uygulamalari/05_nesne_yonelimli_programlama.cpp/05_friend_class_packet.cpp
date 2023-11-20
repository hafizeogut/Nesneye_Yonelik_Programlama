#include <iostream>

using namespace std;

// Packet sınıfı tanımlanıyor.
class Packet {
private:
    string type; // Paket türü
    int source;  // Gönderici ID
    int dest;    // Alıcı ID

public:
    // Paket boyutunu hesaplayan fonksiyon
    int size();
    // Paket değişkenlerini ayarlayan fonksiyon
    void setVariable(string, int, int);
    // Paket türünü döndüren fonksiyon
    string getType();
    // Gönderici ID'yi döndüren fonksiyon
    int getSourceId();
    // Alıcı ID'yi döndüren fonksiyon
    int getDestId();

    // Node sınıfına özel üye fonksiyon bildirimi (friend)
    friend class Node;
};

// Paket boyutunu hesaplayan fonksiyonun tanımı
int Packet::size() {
    return sizeof(int)  + sizeof(string);
}

// Paket değişkenlerini ayarlayan fonksiyonun tanımı
void Packet::setVariable(string t, int s, int d) {
    type = t;
    source = s;
    dest = d;
}

// Paket türünü döndüren fonksiyonun tanımı
string Packet::getType() {
    return type;
}

// Gönderici ID'yi döndüren fonksiyonun tanımı
int Packet::getSourceId() {
    return source;
}

// Alıcı ID'yi döndüren fonksiyonun tanımı
int Packet::getDestId() {
    return dest;
}

// Node sınıfı tanımlanıyor.
class Node {
    int ip; // Node'un IP adresi

public:
    // IP adresini ayarlayan fonksiyon
    void setVariable(int a) {
        ip = a;
    }
    // Paket alımını simüle eden fonksiyon
    void rcvPacket(Packet* p, Node* n) {
        cout << p->getType() << " " << n->ip << " adresinden alındı" << endl;
    }
    // Paket gönderimini simüle eden fonksiyon
    void sendPacket(Packet* p, Node* n) {
        cout << p->getType() << " " << n->ip << " adresinden gönderildi" << endl;
    }
};

int main() {
    // Bir Packet nesnesi oluşturuluyor ve değişkenleri ayarlanıyor.
    Packet* p = new Packet;
    p->setVariable("routwRequest", 125, 859);

    // Node sınıfından iki nesne oluşturuluyor.
    Node* n1 = new Node();
    Node* n2 = new Node(); 

    // Node'lara IP adresleri atanıyor.
    n1->setVariable(192);
    n2->setVariable(191); 

    // Packet nesnesinin boyutu ekrana yazdırılıyor.
    cout << "size of node = " << p->size() << endl;


    cout<<"type of node is "<<p->getType()<<endl;
    cout<<"Source Id of node is "<<p->getSourceId()<<endl;
    cout<<"Destination Id of node is "<<p->getDestId()<<endl;
   
   
    n1->sendPacket(p,n1);
    n2->rcvPacket(p,n2);


    
    return 0;
}
