#include <iostream>
#include <vector>

using namespace std;

// typedef std::vector<std::pair<std::string, int >> pairlist_t; 
using nama_t = std::string;
using umur_t = int;

int main() {
    // pairlist_t pairlist; 
    
    nama_t nama = "Fadil";
    umur_t umur = 15; 
    
    std::cout << "nama anda adalah: " << nama << "\n";
    std::cout << "umur anda adalah: " << umur << "\n";
    
    return 0;
}
