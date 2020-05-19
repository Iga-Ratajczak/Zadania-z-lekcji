#include <iostream>

using namespace std;

string odszyfrowanie(string zaszyfrowany){
    int dl=zaszyfrowany.size();
    int n=0;
    //!
    string wynik[dl];
    for(int i=0; i<dl; i+=4){
        //! n
        wynik[i]=zaszyfrowany[n];
        n++;
    }
    for(int i=1; i<dl; i+=2){
        wynik[i]=zaszyfrowany[n];
        n++;
    }
    //! i = 2
    for(int i=2; i<dl; i+=4){
        wynik[i]=zaszyfrowany[n];
        n++;
    }

    //! musisz konwertowac z tablicy na stringa zwyklego?!

    string odszyfr;
    for(int i=0; i<dl; i++)
        odszyfr+=wynik[i];

    return odszyfr;
}

int main(){
    cout<<"Podaj tekst ktory ma zostac odszyfrowany"<<endl;
    string kryptogram;
    getline(cin, kryptogram);
    string bez;

    int temp=0;
    for(int i=0; i<kryptogram.size(); i++){
        if(kryptogram[i]!=' ')
            bez+=kryptogram[i];

    }
    cout<<"to jest "<<bez;

    string odszyfrowany;
    odszyfrowany = odszyfrowanie(bez);
    cout<<odszyfrowany;
}
