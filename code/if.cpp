#include <iostream>

int main(){
    using namespace std;
    
    string negara;
    int suhu;
    

    cout<<"Kamu berasal dari negara mana: ";
    cin >> negara;
    
    cout<<"Berapa suhu di sana: ";
    cin >> suhu;

    if(suhu <= 16){
        cout<< "sepertinya di "<< negara << "cukup dingin";
    }
    else if(suhu >= 35){
        cout<< "sepertinya di "<< negara << "sedang musim panas";
    }
    else if(suhu <= 0){
        cout<< "sepertinya di "<< negara << "sedang musim salju";
    }
    else{
        cout<< "mantap suhu disana sepertinya normal dan baik-baik saja";
    }
}