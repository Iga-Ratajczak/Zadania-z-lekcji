#include <iostream>

using namespace std;

string szyfrowanie(string tekst, int klucz[], int kolumny){
    int dlT=tekst.size();
    int wiersze;
    if(dlT%kolumny)
        wiersze=dlT/kolumny+1;
    else
        wiersze=dlT/kolumny;

    char tab[wiersze][kolumny];
    for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++)
            tab[i][j]=' ';
    }
    int n=0;
    for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++){
            if(n<dlT){
                tab[i][j]=tekst[n];
                n++;
                cout<<tab[i][j]<<" ";
            }
            else{
                //tab[j][klucz[i]]=' ';
                cout<<tab[i][j]<<" ";
                }
        }
        cout<<endl;
    }
    string wynik;

    for(int i=0; i<kolumny; i++){
        for(int j=0; j<wiersze; j++){
            if(tab[j][klucz[i]]!=' '){
                wynik+=tab[j][klucz[i]];
            }
        }
    }

    return wynik;
}

string odszyfrowywanie(string kryptogram, int klucz[], int kolumny){
    int wiersze;
    int dlK=kryptogram.size();

    if(dlK%kolumny)
        wiersze= dlK%kolumny +1;
    else
        wiersze=dlK%kolumny;

    char tab[wiersze][kolumny];
    int n=0;
    for(int i=0; i<kolumny; i++){
        int l=0;
        for(int j=0; j<wiersze; j++){
            if(klucz[i]<dlK%kolumny){
                if(l<dlK%kolumny){
                    tab[j][klucz[i]]=kryptogram[n];
                    n++;
                    l++;
                }
            }
            else{
                if(l<dlK%kolumny-1){
                    tab[j][klucz[i]]=kryptogram[n];
                    n++;
                    l++;
                }
            }
        }
    }
    string wynik;
    int temp=0;
    for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++){
            if(temp<dlK){
                wynik+=tab[i][j];
                temp++;
            }
        }
    }
    return wynik;

}

string splot(string tekst){
    int dlT=tekst.size();
    string wynik;
    for(int i=0; i<dlT; i+=4){
        wynik+=tekst[i];
    }
    for(int i=1; i<dlT; i+=2){
        wynik+=tekst[i];
    }
    for(int i=2; i<dlT; i+=4){
        wynik+=tekst[i];
    }
    return wynik;
}
string oplot(string kryptogram){
    int dlK=kryptogram.size();
    int n=0;
    string wynik[dlK];
    for(int i=0; i<dlK; i+=4){
        wynik[i]=kryptogram[n];
        n++;
    }
    for(int i=1; i<dlK; i+=2){
        wynik[i]=kryptogram[n];
        n++;
    }
    for(int i=2; i<dlK; i+=4){
        wynik[i]=kryptogram[n];
        n++;
    }

    string wynik2;
    for(int i=0; i<dlK; i++){
        wynik2+=wynik[i];
        //cout<<wynik[i]<<endl;
    }
    return wynik2;
}

string scezar(string tekst, int klucz){
    int dlT=tekst.size();
    string wynik;
    for(int i=0; i<dlT; i++){
        wynik+=(char)(((tekst[i]-97)+klucz)%26+97);
    }
    return wynik;
}
string ocezar(string kryptogram, int klucz){
    int dlK=kryptogram.size();
    string wynik;
    for(int i=0; i<dlK; i++){
        wynik+=(char)(((kryptogram[i]-97)+26-klucz)%26+97);
    }
    return wynik;
}
int main(){
    string jawny="kryptoanaliza";
    int klucz []={2,1,4,0,3};
    int kolumny = 5;
    string wynik;
    wynik=szyfrowanie(jawny, klucz, kolumny) ;
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
