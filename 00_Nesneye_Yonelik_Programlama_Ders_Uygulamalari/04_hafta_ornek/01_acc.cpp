#include <conio.h>
#include <iostream>
#include <list>
using namespace std;

// Ağaç yapısı tanımlanıyor.
struct agac {
    int kod;
    int mal;
};

// Hesap (Acc) yapısı tanımlanıyor.
struct Acc {
    list<agac*> agaclistes; // Ağaç pointer'larını içeren liste
    list<Acc*> accliste;    // Hesap pointer'larını içeren liste
};

// Global Acc pointer'ları oluşturuluyor ve başlangıç değerleri atanıyor.
Acc* acc  = new Acc();
Acc* acc1 = new Acc();
Acc* acc2 = new Acc();

// Bir Acc yapısına ait agaclistes listesinden bir eleman çıkartan fonksiyon.
int al(Acc* acc) {
    acc->agaclistes.pop_back();
    cout << acc->agaclistes.size() << endl; // 4 // 6
    return 0;
}

int main () {
    // Ağaç pointer'ları oluşturuluyor.
    agac* cam = new agac();
    agac* kavak = new agac();

    // Ağaç nesnelerine değerler atanıyor.
    cam->kod = 2;
    cam->mal = 5;
    kavak->kod = 9;
    kavak->mal = 25;

    // acc nesnesinin agaclistes listesine iki ağaç pointer'ı ekleniyor.
    acc->agaclistes.push_back(cam);
    acc->agaclistes.push_back(kavak);
    acc->agaclistes.push_back(cam);
    acc->agaclistes.push_back(kavak);

    // acc1 nesnesinin accliste listesine acc pointer'ı iki kez ekleniyor.
    acc1->accliste.push_back(acc);
    acc1->accliste.push_back(acc);

    // acc1 nesnesinin accliste listesindeki eleman sayısı yazdırılıyor. // Output: 1
    cout << acc1->accliste.size() << endl;

    // acc1 nesnesinin accliste listesinin başındaki elemanın agaclistes listesindeki eleman sayısı yazdırılıyor. // Output: 2
    cout << (acc1->accliste.front())->agaclistes.size() << endl;

    // acc2 nesnesi, acc1 nesnesinin accliste listesinin başındaki elemanın adresini alıyor.
    acc2 = acc1->accliste.front();

    // acc2 nesnesinin agaclistes listesindeki eleman sayısı yazdırılıyor. // Output: 2
    cout << acc2->agaclistes.size() << endl;

    // al fonksiyonu ile acc1 nesnesinin accliste listesinden bir eleman çıkartılıyor.
    al(acc1->accliste.front());

    // acc nesnesinin agaclistes listesindeki eleman sayısı yazdırılıyor. // Output: 3
    cout << acc->agaclistes.size() << endl;

    // al fonksiyonu ile acc nesnesinin agaclistes listesinden bir eleman çıkartılıyor.
    al(acc);

    cout << "son" << endl; // 4

    getch();
    return 0;
}
