#include <iostream>

int main(){
    using namespace std;

    char in;
    char to;
    double a;
    double b;

    cout<< "Masukkan opsi konversi(F/C/R/K): ";
    cin >> in;

    cout<< "Pilih ingin di konverensi kemana(F/C/R/K): ";
    cin >> to;
 
    if (in == 'F' && to == 'C'){
        cout<< "Masukkan suhu dalam Fahrenheit: ";
        cin >> a;
        b = (a - 32) * 5/9;
        cout<< a << " derajat Fahrenheit sama dengan " << b << " derajat Celcius.";
    } else if (in == 'C' && to == 'F'){
        cout<< "Masukkan suhu dalam Celcius: ";
        cin >> a;
        b = (a * 9/5) + 32;
        cout<< a << " derajat Celcius sama dengan " << b << " derajat Fahrenheit.";
    } else if (in == 'C' && to == 'R'){
        cout<< "Masukkan suhu dalam Celcius: ";
        cin >> a;
        b = a * 4/5;
        cout<< a << " derajat Celcius sama dengan " << b << " derajat Reamur.";
    } else if (in == 'R' && to == 'C'){
        cout<< "Masukkan suhu dalam Reamur: ";
        cin >> a;
        b = a * 5/4;
        cout<< a << " derajat Reamur sama dengan " << b << " derajat Celcius.";
    } else if (in == 'F' && to == 'K'){
        cout<< "Masukkan suhu dalam Fahrenheit: ";
        cin >> a;
        b = (a - 32) * 5/9 + 273.15;
        cout<< a << " derajat Fahrenheit sama dengan " << b << " derajat Kelvin.";
    } else if (in == 'K' && to == 'F'){
        cout<< "Masukkan suhu dalam Kelvin: ";
        cin >> a;
        b = (a - 273.15) * 9/5 + 32;
        cout<< a << " derajat Kelvin sama dengan " << b << " derajat Fahrenheit.";
    } else {
        cout<< "Opsi konversi tidak valid.";
    }
}