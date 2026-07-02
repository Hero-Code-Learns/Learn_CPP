#include <iostream>


int main(){
    using namespace std;

    int ran;
    int coba = 0;
    int tebak;

    srand(time(NULL));

    ran = (rand() % 100) + 1;

    cout<< "********** GAME TEBAK ANGKA **********\n";

    do
    {
        cout << "Pilih dari 1 sampai 100: ";
        cin >> tebak;
        coba++;
        /* code */

        if(tebak > ran){
            cout << "Pilihan anda kebesaran: " << endl;
        } 
        else if (tebak < ran){
            cout<< "Pilihan anda kekecilan: "<< endl;
        } 
        else {
            cout<< "Pilihan anda Benar Di percobaan Ke-" << coba << endl;
        }
    } while (tebak != ran);

    cout << "***********************************";
    
}