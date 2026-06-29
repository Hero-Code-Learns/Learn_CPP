#include <iostream>
#include <ctime>
#define c std::cout
using namespace std;

char pilihanPlayer(char player);
char pilihanComputer(char computer);

void menang(char player, char computer);

int main(){
    char player;
    char computer;

    player = pilihanPlayer(player);
    computer = pilihanComputer(computer);
    
        

    c << "Baik pilihan anda adalah: " << player << endl;
    c << "Dan pilihan Computer adalah: " << computer << endl;

    menang(player, computer);
}

char pilihanPlayer(char player){

    c << "Selamat Datang Di Permainan Gunting, Batu, Kertas\n";
    c << "*************************************************\n";

    c << "'B' sebagai Batu.\n";
    c << "'G' sebagai Gunting.\n";
    c << "'K' sebagai Kertas.\n";

    c << "Apa pilihan Anda: ";
    cin >> player;
    
    return player;
}

char pilihanComputer(char computer){
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: 
        computer = 'B'; 
        break;
    case 2: 
        computer = 'G'; 
        break;
    case 3: 
        computer = 'K'; 
        break;
    }
    
    return computer; 
}

void menang(char player, char computer){
    switch (player)
    {
    case 'B': 
        if(computer == 'G'){
            c << "Anda menang, Lawan memilih Gunting" << endl;
        } else if (computer == 'B') {
            c << "SERI, Lawan memilih Batu" << endl ;
        } else {
            c << "Anda kalah, Lawan memilih Kertas" << endl ;
        }
        break; 

    case 'G': 
        if(computer == 'G'){
            c << "SERI, Lawan memilih Gunting" << endl;
        } else if (computer == 'B') {
            c << "Anda kalah, Lawan memilih Batu" << endl;
        } else {
            c << "Anda Menang, Lawan memilih Kertas" << endl;
        }
        break;

    case 'K': 
        if(computer == 'G'){
            c << "Anda kalah, Lawan memilih Gunting" << endl ;
        } else if (computer == 'B') {
            c << "anda menang, Lawan memilih Batu" << endl ;
        } else {
            c << "SERI, Lawan meilih Kertas" << endl;
        }
        break; 
    }
}
