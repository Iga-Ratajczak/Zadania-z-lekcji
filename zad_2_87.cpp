#include <iostream>

using namespace std;


int main(){
    cout<<"podaj wiadomosc do odszyfrowania"<<endl;
    string kryptogram;
    getline(cin, kryptogram);
    int dlT=kryptogram.size();
    cout<<"Podaj klucz wedlug ktorego maja byc odszyfrowane wiadomosci"<<endl;
    int klucz;
    cin>>klucz;


    string alfabet_jawny="abcdefghijklmnopqrstuvwxyz";
    int dlA=alfabet_jawny.size();
    string alfabet_szyfrowy;
    for(int i=klucz; i<dlA+klucz; i++){
        alfabet_szyfrowy+=alfabet_jawny[i%dlA];
    }
    string wynik;
    for(int i=0; i<dlT; i++){
        for(int j=0; j<dlA; j++){
            if(kryptogram[i]==alfabet_szyfrowy[j]){
                wynik+=alfabet_szyfrowy[(dlA+j-klucz)%dlA];
            }
        }
    }
    cout<<wynik;
    return 0;
}
