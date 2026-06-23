#include <iostream>
using namespace std;

namespace name {
    int x = 14;


}

int main(){
    using namespace name;
    using std::cout;
    using std::string;


    string name = "Fadil";
    int x = 15;
    // std:: 
    cout << "Nilai x: " << x << endl;
    cout << "Nama: " << name << endl;
    return 0;
}