#include <iostream>
#define c std::cout

using namespace std; 
void ultah(string nama, int age){
    c << "Selamat ulang tahun " << nama << '\n';
    c << "Ini umurmu yang ke- " << age + 1 << '\n';
}

int main(){
    int age;
    string nama; 

    cout << "Berapa umur mu sekarang: "; 
    cin >> age;                         

    cout << "Siapa namamu: ";           
    cin >> nama;                        

    ultah(nama, age); 

    return 0;
}
