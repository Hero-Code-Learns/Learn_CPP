#include <iostream>
using namespace std;
#define c std::cout

int main(){
    double duit = 0;
    int pilih;
    double depo;
    double narek;
    
    do
    {
        c << "\n***** SELAMAT DATANG DI BANK REPUBLIK HERO *****" << endl;
        c << "1. LIAT DUIT." << endl;
        c << "2. DEPOSIT DUIT." << endl;
        c << "3. TARIK UANG" << endl ;
        c << "4. TAK JADI" << endl; 

        c << "Silahkan ada yang perlu kami bantu (1-4): ";
        cin >> pilih;
        c << endl;

        switch(pilih){
            case 1: 
                c << "DUIT ANDA SEKARANG ADALAH: RP. " << duit << endl;
                break;
                
            case 2: 
                c << "Mantap mau Depo berapa: RP. ";
                cin >> depo;

                duit = duit + depo;

                c << "Terimakasih, uang anda sekarang adalah: RP. " << duit << endl;
                break; 

            case 3: 
                c << "Baik tuan mau narek berapa: RP. ";
                cin >> narek;

                if(narek > duit){
                    c << "DIMANA DUITNYA KALAU SEGITU MAH!!! Uang anda tidak cukup." << endl;
                } else {
                    duit = duit - narek;
                    c << "Terimakasih tuan, silakan ambil uangnya." << endl;
                    c << "Sisa duit anda: RP. " << duit << endl;
                }
                break;
                
            case 4:
                c << "Terimakasih telah menggunakan Bank Republik Hero! Sampai jumpa." << endl;
                break;
                
            default:
                c << "Pilihan salah! Silakan pilih angka 1 sampai 4." << endl;
                break;
        }  
        
    } while (pilih != 4); 
    
    return 0;
}
