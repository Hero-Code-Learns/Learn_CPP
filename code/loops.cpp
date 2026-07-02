// #include <iostream>

// int main(){
//     using namespace std;

//     for(int i = 1; i <= 5; i++){

//         for(int j = 1; j <= i; j++){
//             cout << "*";
//         }
    

//     cout << endl;
//     }

//     return 0;
// }

#include <iostream>

int main(){
    using namespace std;

    int tinggi;
    char simbol;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;


    cout << "Masukkan simbol segitiga: ";
    cin >> simbol;
    for(int i = 1; i <= tinggi; i++){
        for(int j = 1; j <= i; j++){
            cout << simbol;
        }
        cout << endl;
    }
}