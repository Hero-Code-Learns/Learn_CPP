#include <iostream>
using namespace std;
#include <cmath>

int main() {
    double a = 5;
    double b = 3;

    // double hasil = pow(a, b);
    // double hasil = sqrt(a);
    // double hasil = cbrt(a);
    // double hasil = abs(-5);
    // double hasil = fabs(-5.5);
    // double hasil = fmax(a, b);
    double hasil = fmin(a, b);

    cout << hasil << endl;
}