#include <iostream>

int main(){
    using namespace std;

    // && ini untuk logika yang sama

    int age;

    cout<< "Masukkan umur: ";
    cin>> age;

    if (age < 18 && age > 0){
        cout<< "Anda belum cukup umur untuk mengakses konten ini.";
    } else if (age >= 18 && age < 100){
        cout<< "Selamat datang di kehidupan dewasa.";
    } else {
        cout<< "Umur yang dimasukkan tidak valid.";
    }


// || mejalankan perntah apabila ada saltu yang benar
    if (age < 18 || age > 100){
        cout<< "\nAnda tidak dapat mengakses konten ini.";
    } else {
        cout<< "\nAnda dapat mengakses konten ini.";
    }

// ! mengubah sebuah nilai menjadi kebalikan dari nilai tersebut

if (!(age < 18)){
        cout<< "\nAnda dapat mengakses konten ini.";
    } else {
        cout<< "\nAnda tidak dapat mengakses konten ini.";
    }


    
    return 0;
}