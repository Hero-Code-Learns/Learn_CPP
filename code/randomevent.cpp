#include <iostream>
#include <ctime>

int main(){
    using namespace std;

    srand(time(0));

    int hadiah = rand() % 5 + 1;

    switch(hadiah){
        case 1: cout<< "selamat anda mendapatkan anak anjing\n";
            break;
        case 2: cout<< "selamat anda mendapatkan kaus\n";
            break;
        case 3: cout<< "selamat anda mendapatkan iphone 17\n";
            break;
        case 4: cout<< "selamat anda mendapatkan set PC Gaming\n";
            break;
        case 5: cout<< "selamat anda mendapatkan lolipop\n";
            break;
    }

    

}