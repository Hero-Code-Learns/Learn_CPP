#include <iostream> 

#define c std::cout 

using namespace std; 

int main(){ 
    string barang[] = {"Permen", "Mainan", "Kipas"}; 
    double harga[] = {5000, 10000, 20000}; 
    
    c << "**********List barang dan harganya**********\n"; 
    c << barang[0] << " Dengan harga: " << harga[0] << endl; 
    
    return 0; 
}
