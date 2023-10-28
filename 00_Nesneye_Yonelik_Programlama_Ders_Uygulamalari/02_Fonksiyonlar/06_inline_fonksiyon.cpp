#include <iostream>
using namespace std;

// 1. "inline" anahtar kelimesi, işlevin kodunu işlev çağrısı yerine doğrudan yerleştirilmesi için derleyiciye önerir.
inline int kare(int a) {
    return a * a;
}

int main() {
    int sayi;

    // 2. Kullanıcıdan bir sayı girişi alınır.
    cout << "Bir sayı girin: ";
    cin >> sayi;

    // 3. "kare" işlevi kullanılarak girilen sayının karesi hesaplanır.
    int sonuc = kare(sayi);

    // 4. Sonuç ekrana yazdırılır.
    cout << "Girdiğiniz sayının karesi: " << sonuc << endl;

    return 0;
}
