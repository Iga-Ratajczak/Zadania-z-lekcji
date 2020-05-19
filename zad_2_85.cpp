#include <iostream>

using namespace std;




int main(){
    string zaszyfrowany="sf sfzpj snlid snj ojxy ef utest";
    int dlT=zaszyfrowany.size();
    string alfabet_jawny = "abcdefghijklmnopqrstuvwxyz";
    int dlA = alfabet_jawny.size();
    string alfabet_szyfrowy;
    for(int i=0; i<dlA; i++){
        alfabet_szyfrowy+=alfabet_jawny[(i+21)%dlA];
    }
    cout<<alfabet_jawny<<endl<<alfabet_szyfrowy<<endl<<endl;
    string wynik;
    for(int i=0; i<dlT; i++){
        for(int j=0; j<dlA; j++){
            if(alfabet_szyfrowy [j]==zaszyfrowany[i])
                wynik+=alfabet_szyfrowy[(j+21)%dlA];
        }
    }
    cout<<wynik;
    return 0;
}
