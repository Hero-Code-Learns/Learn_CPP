#include <iostream>

int main() {
    using namespace std;

    int angka;

    // cout << "Masukkan angka: ";
    // cin >> angka;

    // while (angka < 0) {
    //     cout << "Angka tidak boleh negatif. Masukkan angka: ";
    //     cin >> angka;
    // }

    do {
        cout << "Angka tidak boleh negatif. Masukkan angka: ";
        cin >> angka;
    } while (angka < 0);

    cout << "Angka yang dimasukkan: " << angka << endl;
}