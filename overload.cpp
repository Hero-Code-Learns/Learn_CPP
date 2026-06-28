#include <iostream> 
#define c std::cout 
using namespace std; 

void pesanan(); 
void pesanan(string makanan); 
void pesanan(string makanan, string minuman); 

int main(){ 
    string minuman; 
    string makanan; 
    
    c << "Apa makanan mu: "; 
    cin >> makanan; 
    c << "Apa Minuman mu: "; 
    cin >> minuman; 
    
 
    c << "\n--- Hasil Pemanggilan Overloading ---\n";
    
    c << "1. Tanpa parameter: ";
    pesanan(); 
    
    c << "2. Hanya makanan: ";
    pesanan(makanan); 
    
    c << "3. Makanan & Minuman: ";
    pesanan(makanan, minuman); 
    
    return 0;
} 

void pesanan(){ 
    c << "Ini pesanan mu.\n"; 
} 

void pesanan(string makanan){ 
    c << "Pesanan anda adalah " << makanan << ".\n"; 
} 

void pesanan(string makanan, string minuman){ 
    c << "Pesanan mu adalah " << makanan << " dan " << minuman << ". Selamat menikmati hidangan!\n"; 
}
