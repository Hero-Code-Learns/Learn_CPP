#include <iostream>

int main(){
    using namespace std;

    char nilai;
    string mapel;

    cout << "Apa mapel anda: ";
    cin >> mapel;

    cout << "Masukkan nilai anda (A-D): ";
    cin >> nilai;

    switch(nilai){
        case 'A': 
            cout << "Nilai " << mapel << " anda sangat bagus" ;
            break;
        case 'B': 
            cout << "Nilai " << mapel << " anda bagus" ;
            break;
        case 'C': 
            cout << "Nilai " << mapel << " anda Kurang bagus" ;
            break;
        case 'D': 
            cout << "Nilai " << mapel << " anda sangat buruk" ;
            break;
        default: 
            cout << "Pilihan anda tidak valid";
    }

}