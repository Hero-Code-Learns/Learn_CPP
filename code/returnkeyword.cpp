#include <iostream>
#define c std::cout

using namespace std;

double persegiPanjangKeliling(double panjang, double lebar);
double persegiPanjangLuas(double panjang, double lebar);

int main(){
    double panjang; 
    double lebar;

    c << "Berapa panjang persegi: ";
    cin >> panjang;

    c << "Berapa lebarnya: ";
    cin >> lebar;

    double keliling = persegiPanjangKeliling(panjang, lebar);
    double luas = persegiPanjangLuas(panjang, lebar);

    c << "Keliling persegi Panjangnya adalah: " << keliling << endl;
    c << "luas persegi Panjangnya adalah: " << luas << endl;

    return 0;

}

double persegiPanjangKeliling(double panjang, double lebar){
    return (panjang + lebar) * 2;
}

double persegiPanjangLuas(double panjang, double lebar){
    return panjang * lebar;
}