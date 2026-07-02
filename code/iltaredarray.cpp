#include <iostream>
#define c std::cout 

using namespace std;

int main(){
    string barang[] = {"Kopi", "Teh", "Matcha"};

    for(int i = 0; i < sizeof(barang)/sizeof(string); i++ ){
        c << "kami menyediakan: " << barang[i] << endl;
    }
}