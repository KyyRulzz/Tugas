#include <iostream>
#include <cmath> // untuk abs()

using namespace std;

// Fungsi untuk menampilkan identitas
void tampilIdentitas() {
    cout << "Halo, nama saya adalah M. Rizky Fahrul Azizi" << endl;
    cout << "Saya kuliah pada jurusan Teknik Informatika di Universitas Pelita Bangsa" << endl;
    cout << "Saya memiliki hobi Bermain Voli" << endl << endl;
}

// Operasi hitung
void hitungOperasi(int x, int y) {
    cout << "=== Hasil Operasi ===" << endl;
    cout << "Penjumlahan: " << (x + y) << endl;
    cout << "Perkalian:   " << (x * y) << endl;

    if (y != 0) {
        cout << "Pembagian:   " << abs(x / y) << endl;
        cout << "Modulus:     " << abs(x % y) << endl;
    } else {
        cout << "Pembagian:   Error (pembagi nol)" << endl;
        cout << "Modulus:     Error (pembagi nol)" << endl;
    }
}

int main() {
    // Panggil fungsi identitas
    tampilIdentitas();

    // Input
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << endl;

    hitungOperasi(a, b);

    return 0;
}