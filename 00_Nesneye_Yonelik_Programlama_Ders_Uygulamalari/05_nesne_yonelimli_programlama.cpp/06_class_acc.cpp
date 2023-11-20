#include <iostream>

using namespace std;


// Acc sınıfı tanımlanıyor
class Acc {
    public:
        int id;   // Acc sınıfının public üye değişkeni: id
        int hop;  // Acc sınıfının public üye değişkeni: hop
} s;  // Acc sınıfından bir örnek (nesne) olan s oluşturuluyor

int main() {
    s.id = 5;  // s nesnesinin id üye değişkenine 5 değeri atanıyor
    cout << s.id << endl;  // s nesnesinin id üye değişkeni ekrana yazdırılıyor

    return 0;  // Program başarıyla tamamlandı
}
