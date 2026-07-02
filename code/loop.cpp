#include <iostream>

int main(){
    using namespace std;

    string name;

    while(name.empty()){
        cout<< "Masukkan nama Anda: ";
        getline(cin, name);
    }
    cout<< "Halo, " << name << "!" << endl;
    return 0;
}