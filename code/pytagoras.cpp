#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    double a;
    double b;
    double c;

    std::cout << "Masukkan nilai A: ";
    std::cin >> a;

    std::cout << "Masukkan nilai B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);

    c = sqrt(a + b);

    std::cout << "Nilai c adalah: " << c;    
}