#include <iostream>
using namespace std;

int main() {
    std::string nama;
    int umur;

    std::cout<<"siapa nama anda: ";
    std::cin >> nama;

    std::cout<<"berapa umur anda: ";
    std::cin >> umur;

    std::cout<<"Hello "<< nama << std::endl;
    std::cout<<"umur anda "<< umur << std::endl;
    return 0;
}