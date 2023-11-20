#include <iostream>

using namespace std;

// Node sınıfı tanımlanıyor
class Node {
private:
    string type;   // Özel üye değişken: tip
    int source;    // Özel üye değişken: gönderici ID
    int dest;      // Özel üye değişken: alıcı ID

public:
    // size fonksiyonu: bu sınıfın boyutunu hesaplamak için kullanılır
    int size() {
        return sizeof(int) * 1 + sizeof(string) * 1;  // Bir tane int ve bir tane string'in toplam boyutu
    }

    // setVariable fonksiyonu: üye değişkenlere değer atamak için kullanılır
    void setVariable(string t, int s, int d) {
        type = t;
        source = s;
        dest = d;
    }

    // getType fonksiyonu: tip değerini döndürmek için kullanılır
    string getType() {
        return type;
    }

    // getSourceId fonksiyonu: gönderici ID değerini döndürmek için kullanılır
    int getSourceId() {
        return source;
    }

    // getDestId fonksiyonu: alıcı ID değerini döndürmek için kullanılır
    int getDestId() {
        return dest;
    }
};

int main() {
    Node n;  // Node sınıfından bir örnek (nesne) oluşturuluyor
    n.setVariable("routeRequest", 125, 859);  // setVariable fonksiyonu çağrılarak değerler atanıyor

    // Node örneğinin özellikleri ekrana yazdırılıyor
    cout << "size of node = " << n.size() << endl;
    cout << "type of node is " << n.getType() << endl;
    cout << "Source Id of node is " << n.getSourceId() << endl;
    cout << "Destination Id of node is " << n.getDestId() << endl;

    return 0;  // Program başarıyla tamamlandı
}
