#include <iostream>
#include <string>
#include <fstream>

using namespace std;




int main(){
    string tekst_jawny, kryptogram;
    cout<<"Podaj tekst jawny do zaszyfrowania wedlug klucza"<<endl;
    getline(cin, tekst_jawny);

    cout<<"Podaj kryptogram do odszyfrowania wedlug klucza"<<endl;
    getline(cin, kryptogram);
    int dlK=kryptogram.size();

    cout<<"Podaj klucz"<<endl;
    int klucz;
    cin>>klucz;

    int dlT=tekst_jawny.size();

    string alfabet_jawny = "abcdefghijklmnopqrstuvwxyz";
    int dlA = alfabet_jawny.size();

    string alfabet_szyfrowy;
    for(int i=0; i<dlA; i++){
        alfabet_szyfrowy+=alfabet_jawny[(i+klucz)%dlA];
    }
    string alfabet_szyfrowy_2;
    for(int i=0; i<dlA; i++){
        alfabet_szyfrowy_2+=alfabet_jawny[(i+dlA-klucz)%dlA];
    }
    //cout<<alfabet_jawny<<endl;
    //cout<<alfabet_szyfrowy<<endl;
    //cout<<alfabet_szyfrowy_2<<endl;

    string zaszyfrowany;
    for(int i=0; i<dlT; i++){
        for(int j=0; j<dlA; j++){
            if(alfabet_szyfrowy [j]==tekst_jawny[i])
                zaszyfrowany+=alfabet_szyfrowy[(j+klucz)%dlA];
        }
    }
    cout<<zaszyfrowany<<endl;

    string odszyfrowany;
    for(int i=0; i<dlK; i++){
        for(int j=0; j<dlA; j++){
            if(alfabet_szyfrowy_2 [j]==kryptogram[i])
                odszyfrowany+=alfabet_szyfrowy_2[(j+dlA-klucz)%dlA];
        }
    }
    cout<<odszyfrowany;

    ofstream plik("cezar.txt");
    plik<<zaszyfrowany<<endl;
    plik<<odszyfrowany<<endl;
    plik.close();



    return 0;
}
