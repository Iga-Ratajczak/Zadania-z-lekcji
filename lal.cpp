#include <iostream>

using namespace std;

string szyfrowanie(string tekst, int klucz[], int kolumny ){

    int dlT=tekst.size();

    //okreslanie ilosci wierszy
    int wiersze;
    if(dlT%kolumny)
        wiersze=dlT/kolumny +1;
    else
        wiersze=dlT/kolumny;

    string tablica[wiersze][kolumny];

    int k=0;

    //zapisywanie do tablicy
    for(int i=0; i<wiersze; i++){
        for (int j=0; j<kolumny; j++){
            if(k<dlT){
                tablica[i][j]=tekst[k];
                k++;
            }
            else
                tablica[i][j]="\0";
        }
    }

    //szyfrowanie
    string wynik;

    for(int i=0; i<kolumny; i++){
        //int l=klucz[i];
        for(int j=0; j<wiersze; j++){
            //!jezeli string to w ""
            if(tablica[j][klucz[i]]!="\0")
                wynik+=tablica[j][klucz[i]];
        }
    }
    return wynik;
}

string odszyfrowywanie(string kryptogram, int klucz[], int kolumny){
    int dlK=kryptogram.size();
    int wiersze;
    if(dlK%kolumny)
        wiersze=dlK/kolumny+1;
    else
        wiersze=dlK/kolumny;
    //!char
    char tab[wiersze][kolumny];
    int k=0;

    for(int i=0; i<kolumny; i++){
        int l=0;
        for(int j=0; j<wiersze; j++){
            if(k<dlK){
                if(klucz[i]<dlK%kolumny){
                    if(l<dlK%kolumny){
                        tab[j][klucz[i]]=kryptogram[k];
                        cout<<j<<" "<<i<<" "<<klucz[i]<<" "<<kryptogram[k]<<" "<<tab[j][klucz[i]]<<endl;
                        k++;
                        l++;
                    }
                }
                else{
                    if(l<dlK%kolumny-1){
                        tab[j][klucz[i]]=kryptogram[k];
                        cout<<j<<" "<<klucz[i]<<" "<<kryptogram[k]<<" "<<tab[j][klucz[i]]<<endl;
                        k++;
                        l++;
                    }
                }
            }
            //bledne nadpisanie niepotrzebny fragment
            //if(k==dlK)
                //tab[j][klucz[i]]='\0';
        }
        cout<<endl;
    }

    for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++){
            //cout<<i<<" "<<j<<" ";
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }

    string wynik;
    for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++){
            if(tab[i][j]!=0){
                //cout<<i<<" "<<j<<" ";
                wynik+=tab[i][j];
            }
        }
    }
    return wynik;
}

string splot(string tekst){
    int dl=tekst.size();
    string wynik;
    for(int i=0; i<dl; i+=4){
        wynik+=tekst[i];
    }
    for(int i=1; i<dl; i+=2){
        wynik+=tekst[i];
    }
    for(int i=2; i<dl; i+=4){
        wynik+=tekst[i];
    }
    return wynik;
}
string oplot(string kryptogram){
    int dl=kryptogram.size();
    string wynik[dl];
    int n=0;
    for(int i=0; i<dl; i+=4){
        wynik[i]=kryptogram[n];
        n++;
    }
    for(int i=1; i<dl; i+=2){
        wynik[i]=kryptogram[n];
        n++;
    }
    for(int i=2; i<dl; i+=4){
        wynik[i]=kryptogram[n];
        n++;
    }
    string wynik2;
    for(int i=0; i<dl; i++){
        wynik2+=wynik[i];
    }
    return wynik2;
}
string scezar(string tekst, int klucz){
    int dl=tekst.size();
    string wynik;
    for(int i=0; i<dl; i++){
        wynik+=(char)(((tekst[i]-97)+klucz)%26+97);
        //cout<<wynik<<endl;
    }
    return wynik;

}
string ocezar(string kryptogram, int klucz){
    int dl=kryptogram.size();
    string wynik;
    for(int i=0; i<dl; i++){
        wynik+=(char)(((kryptogram[i]-97)+26-klucz)%26+97);
    }
    return wynik;
}
int main(){
    string jawny="kryptoanaliza";
    int klucz []={2,1,4,0,3};
    int kolumny = 5;
    string wynik=szyfrowanie(jawny, klucz, kolumny) ;
    cout<<wynik<<endl;
    string odszyfrowany=odszyfrowywanie(wynik, klucz, kolumny);
    cout<<odszyfrowany<<endl;
    wynik=splot(jawny);
    cout<<wynik<<endl;
    string wynik2=oplot(wynik);
    cout<<wynik2<<endl;
    int klucz2 =3;
    wynik=scezar(jawny, klucz2);
    cout<<wynik<<endl;
    wynik2=ocezar(wynik, klucz2);
    cout<<wynik2;
    return 0;
}
