#include <iostream>

int main(){
    using namespace std;

    string name;

    cout<< "Masukkan nama anda: ";
    cin>> name;

    // name.append(" selamat datang di program ini.");
    // name.erase(0, 1);
    // name.insert(0, "H");
    // name.replace(0, 1, "H");
    // name.find('selamat');


    if(name.length() > 12 && !name.empty()){
        cout<< "Halo " << name;
    }
    else{
        cout<< "Nama tidak valid";
    }
    
}