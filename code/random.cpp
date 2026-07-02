#include <iostream>

int main() {
    using namespace std;

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;   
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << "angka random: " << num1 << endl;
    cout << "angka random: " << num2 << endl;
    cout << "angka random: " << num3 << endl;

    return 0;
}