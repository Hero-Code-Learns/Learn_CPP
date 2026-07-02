#include <iostream>
#define c std::cout

using namespace std;

int main(){
    int angka;
    bool tes = true;
    double angkka = 5.40;
    std::string sapa = "HAI";
    string nama[] = {"Fadil", "Hero", "Dills"};

    c << sizeof(angka) << " Bytes" << endl;
    c << sizeof(nama)/sizeof(string) << " Elements";
} 