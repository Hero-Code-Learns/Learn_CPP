#include <iostream>
#define c std::cout
using namespace std;

int global = 1;

void testing(int global);

int main(){
    int global = 2;

    testing(global);

    c << "Angka lokal main adalah " << global << endl; 
}

void testing(int test){
    int global = 3;

    c << "Angka perubahan adalah " << global << endl;
    c << "angka asli adalah " << ::global << endl;
}

