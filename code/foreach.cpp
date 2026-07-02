#include <iostream>
#define c std::cout

using namespace std;

int main(){

    string minum[] = {"Kopi", "Teh", "Matcha"};

    for(string data : minum){
        c << "Daftar minuman kami: " << data << endl; 
    }
}