#include <iostream>

using namespace std;

string szyfrowanie(string jawny){
    int dl=jawny.size();
    string wynik;
    for(int i=0; i<dl; i+=2){
        wynik+=jawny[i];
    }
    for(int i=1; i<dl; i+=2){
        wynik+=jawny[i];
    }
    return wynik;
}

string odszyfrowanie(string kryptogram){
    int dl=kryptogram.size();
    string wynik[dl];
    int n=0;
    for(int i=0; i<dl; i+=2){
        wynik[i]=kryptogram[n];
        n++;
    }
    for(int i=1; i<dl; i+=2){
        wynik[i]=kryptogram[n];
        n++;
    }

    string odszyfr;
    for(int i=0; i<dl; i++){
        odszyfr+=wynik[i];
    }
    return odszyfr;
}

int main(){
    cout<<"Podaj tekst do zaszyfrowania i odszyfrowania"<<endl;
    string jawny;
    getline(cin, jawny);

    string kryptogram;
    getline(cin, kryptogram);

    //pozbywanie sie spacji
    string jawny_bez;
    for(int i=0; i<jawny.size(); i++){
        if(jawny[i]!=' ')
            jawny_bez+=jawny[i];
    }
    string kryptogram_bez;
    for(int i=0; i<kryptogram.size(); i++){
        if(kryptogram[i]!=' ')
            kryptogram_bez+=kryptogram[i];
    }
    string zaszyfrowany;
    zaszyfrowany=szyfrowanie(jawny_bez);
    cout<<zaszyfrowany<<endl;

    string odszyfrowany;
    odszyfrowany = odszyfrowanie(kryptogram_bez);
    cout<<odszyfrowany;

    return 0;
}




