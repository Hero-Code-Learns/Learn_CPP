#include <iostream>

int main(){
    using namespace std;

    char op;
    double a;
    double b;
    double hasil;


    cout<< "*****SELAMAT DATANG DI KALKULATOR INDONESIA*****\n";
    cout<< "************************************************\n";
    
    cout<< "Pilih oprator(+ - / *): ";
    cin >> op; 

    cout<< "Masukkan angka pertama: ";
    cin>> a;

    cout<< "Masukkan angka kedua: ";
    cin>> b;

    switch(op){
        case '+':
            hasil = a + b;
            std::cout << "Hasilnya adalah: " << hasil;
            break;
        case '-':
            hasil = a - b;
            std::cout << "Hasilnya adalah: " << hasil;
            break;
        case '*':
            hasil = a * b;
            std::cout << "Hasilnya adalah: " << hasil;
            break;
        case '/':
            hasil = a / b;
            std::cout << "Hasilnya adalah: " << hasil;
            break;
    }

}