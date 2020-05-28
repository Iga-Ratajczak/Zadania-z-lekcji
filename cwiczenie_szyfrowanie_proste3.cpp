#include<iostream>

using namespace std;
#define MAX 100

string skolumnowy(string tekst, int klucz[], int kolumny){
   int dl=tekst.size();
   int wiersze;
   if(dl%kolumny)
       wiersze=dl/kolumny+1;
   else
        wiersze=dl/kolumny;
   char tab[MAX][MAX];
   int n=0;
   for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++){
            if(n<dl){
                tab[i][j]=tekst[n];
                n++;
            }
            else
                tab[i][j]='\0';
        }
   }
   string wynik;
   for(int i=0; i<kolumny; i++){
        for(int j=0; j<wiersze; j++){
            if(tab[j][klucz[i]]!='\0')
                wynik+=tab[j][klucz[i]];
        }
   }

    return wynik;

}


string okolumnowy(string krypto, int klucz[], int kolumny){
    int dl=krypto.size();
    int wiersze;
    if(dl%kolumny)
        wiersze=dl/kolumny+1;
    else
        wiersze=dl/kolumny;
    char tab[MAX][MAX];
    int n=0;
    for(int i=0; i<kolumny; i++){
        int l=0;
        for(int j=0; j<wiersze; j++){
            if(klucz[i]<dl%kolumny){
                if(l<dl%kolumny){
                    tab[j][klucz[i]]=krypto[n];
                    n++;
                    l++;
                }
            }
            else{
                if(l<dl%kolumny-1){
                    tab[j][klucz[i]]=krypto[n];
                    n++;
                    l++;
                }
            }
        }
    }
    n=0;
    string wynik;
    for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++){
            if(n<dl){
                wynik+=tab[i][j];
                n++;
            }
        }
    }
    return wynik;
}

string splotowy(string tekst){
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
string oplotowy(string krypto){
    int dl=krypto.size();
    int n=0;
    string wynik[dl];
    for(int i=0; i<dl; i+=4){
        wynik[i]=krypto[n];
    }
    for(int i=0; i<dl; i+=4){
        wynik[i]=krypto[n];
        n++;
    }
    for(int i=1; i<dl; i+=2){
        wynik[i]=krypto[n];
        n++;
    }
    for(int i=2; i<dl; i+=4){
        wynik[i]=krypto[n];
        n++;
    }

    string wynik2;
    for(int i=0; i<dl; i++){
        wynik2+=wynik[i];
    }
    return wynik2;
}

string scezar(string tekst, int klucz, string alfabet){
    int dlT=tekst.size();
    int dlA=alfabet.size();

    string wynik;
    for(int i=0; i<dlT; i++){
        for(int j=0; j<dlA; j++){
            if(tekst[i]==alfabet[j]){
                wynik+=alfabet[(j+klucz)%dlA];
            }
        }
    }
    return wynik;
}
string ocezar(string krypto, int klucz, string alfabet){
    int dlK=krypto.size();
    int dlA= alfabet.size();

    string wynik;
    for(int i=0; i<dlK; i++){
        for(int j=0; j<dlA; j++){
            if(krypto[i]==alfabet[j]){
                wynik+=alfabet[(j+dlA-klucz)%dlA];
            }
        }
    }
    return wynik;
}

int main(){
    string tekst="  K R Y PTOANALIZA";
    string jawny;
    for(int i=0; i<tekst.size(); i++){
        if(tekst[i]!=' ')
            jawny+=tekst[i];
    }
    //cout<<jawny<<endl;
    int kolumny=5;
    int klucz[]={2,1,4,0,3};
    string wynik=skolumnowy(jawny, klucz, kolumny);
    cout<<wynik<<endl;
    string wynik2=okolumnowy(wynik, klucz, kolumny);
    cout<<wynik2<<endl;
    wynik=splotowy(jawny);
    cout<<wynik<<endl;
    wynik2=oplotowy(wynik);
    cout<<wynik2<<endl;
    string alfabet_jawny="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //cout<<alfabet_jawny.size();
    int klucz2=3;
    wynik=scezar(jawny, klucz2, alfabet_jawny);
    cout<<wynik<<endl;
    string alfabet_szyfrowy;
    for(int i=0; i<alfabet_jawny.size(); i++){
        alfabet_szyfrowy+=alfabet_jawny[(i+klucz2)%alfabet_jawny.size()];
    }
    cout<<alfabet_szyfrowy<<endl;
    wynik2=ocezar(wynik, klucz2, alfabet_szyfrowy);
    cout<<wynik2;

    return 0;
}
