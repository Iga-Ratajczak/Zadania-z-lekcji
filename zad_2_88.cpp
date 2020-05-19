#include <iostream>

using namespace std;
string wlasciwy_klucz(string klucz){
    string klucz2;
    int temp=0;
    int temp2=0;

    //stworzenie klucza bez powtarzajacych sie liter
    for(int i=0; i<klucz.size(); i++){
        //! j=1 nie i+1
        for(int j=1; j<klucz.size(); j++){
        //sprawdzanie czy litera sie powtarza
            if(klucz[i]==klucz[j])
                temp++;
        }
        if(temp==0)
            klucz2+=klucz[i];
        else{
        //!jedna petla
        //! sprawdzanie czy dany znak ktory sie powtarza juz wystepuje w nowym kluczu
            for(int k=0; k<klucz2.size(); k++){
                if(klucz2[k]==klucz[i])
                    temp2++;
        }
        // jezeli nie to przypisuje
        if(temp2==0)
            klucz2+=klucz[i];
        temp = 0;
        temp2=0;
        }
    }
    return klucz2;
}

string alfabet_wlasciwy(string klucz2, string alfabet_jawny){

    int dlA=alfabet_jawny.size();
    int dlK=klucz2.size();
    string alfabet=klucz2;
    int temp=0;
    for (int i=0; i<dlA; i++){
        for(int j=0; j<dlK; j++){
            //! sprawdzasz czy w alfabecie nie ma litery z klucza
            if(alfabet_jawny[i]==klucz2[j]){
                temp++;
            }
        }
        if(temp==0)
            alfabet+=alfabet_jawny[i];
        temp = 0;
        }
    return alfabet;
}

int main(){
    //kryptogram z zadnia 2.88
    //string kryptogram = "ltnfcf hkcwht mkik cqlnt";
    string kryptogram = "dtubtgc";
    //klucz z zadania 2.88
    //string klucz="kryptografia";
    string klucz="kryptografiaikryptoanaliza";
    string klucz2=wlasciwy_klucz(klucz);
    string alfabet_jawny="abcdefghijklmnopqrstuvwxyz";
    string alfabet=alfabet_wlasciwy(klucz2, alfabet_jawny);
    cout<<klucz2<<endl<<alfabet_jawny<<endl<<alfabet<<endl;
    string wynik;
    //szyfrowanie
    for(int i=0; i<kryptogram.size(); i++){
        for(int j=0; j<alfabet.size(); j++){
            if(kryptogram[i]==alfabet[j]){
                wynik+=alfabet_jawny[j];
                //cout<<j<<endl;
            }
        }
    }
    cout<<wynik;

    return 0;
}
