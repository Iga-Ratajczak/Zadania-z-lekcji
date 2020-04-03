#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int const MAX = 500;

//sprawdzanie czy liczba jest pierwsza
bool pierwsza (int liczba){
    if(liczba<2) return false;
    else{
        for(int i=2; i <= (int)sqrt(liczba); i++){
            if(liczba%i == 0) return false;
        }
    }
    return true;
}

int main(){
    //odczytywanie z pliku
    ifstream plik;
    plik.open ("liczbymat.txt");

    //sprawdzanie pliku
    if(!plik.good()) cout<<"Plik nie dziala "<<endl;

    //jezeli jest ok
    else{
        int tab[MAX];
        int i=0;

        //tworzenie tablicy
        while(!plik.eof()){
            plik>>tab[i];
            i++;
        }

        //tworzenie pliku wynikow
        ofstream wyniki;
        wyniki.open("zad_5.txt");

        for(int i=0;i<MAX;i++){
            if(pierwsza(tab[i])){
                for(int j=0; j<MAX; j++){
                    if(tab[i]*tab[i]==tab[j])
                        wyniki<<tab[i]<<endl;
                }
            }
        }

    plik.close();
    wyniki.close();
    }
    return 0;
}
