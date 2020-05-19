#include <iostream>

using namespace std;
string klucz_wlasciwy(string klucz){
    int dlK = klucz.size();
    string wynik;
    int temp=0;
    int temp2=0;
    for(int i=0; i<dlK; i++){
        //! j=1 nie i+1
        for (int j=1; j<dlK; j++){
            if(klucz[i]==klucz[j])
               temp++;
        }
        if(temp==0){
            wynik+=klucz[i];
        }
        else{
            //!jedna petla
            for(int k=0; k<wynik.size(); k++){
                if(wynik[k]==klucz[i]){
                        temp2++;
                    }
                }
                //cout<<temp2<<endl<<wynik<<endl<<klucz[i]<<endl;
                if(temp2==0)
                    wynik+=klucz[i];
        }
        //cout<<wynik<<endl;
        temp=0;
        temp2=0;
    }
    return wynik;
}

int main(){
    string klucz="telefon";
    string klucz2;
    klucz2=klucz_wlasciwy(klucz);
    int dlK=klucz2.size();
    cout<<klucz2<<endl;
    string alfabet_podst = "abcdefghijklmnopqrstuvwxyz";
    int dlA= alfabet_podst.size();

    //tworzenie tablicy bedacej alfabetem szyfrowym
    string alfabet[dlK][dlA];
    for(int i=0; i<dlK; i++){
        for(int j=0; j<dlA; j++){
            if(klucz2[i]==alfabet_podst[j]){
                int temp=j;
                for(int k=0; k<dlA; k++){
                    alfabet[i][k]=alfabet_podst[(temp)%dlA];
                    temp++;
                    cout<<alfabet[i][k]<<" ";
                }
            }
        }
        cout<<endl;
    }
    //! musisz usunac spacje albo pisac bez
    string tekst_jawny="nieobecnysamsobieszkodzi";
    string wynik;
    int j=0;
    for(int i=0; i<tekst_jawny.size(); i++){
        //tu chcialam wstawic petle
        //for(int j=0; j<dlK; j++){
            for(int k=0; k<dlA; k++){
                if(tekst_jawny[i]==alfabet_podst[k]){
                    wynik+=alfabet[j][k];
                    cout<<"kolumna "<<k<<"wiersz"<<j<<endl;
                    //break;
                }
            }
        //!nie dziala normalna petla
            j=(j+1)%(dlK);
            cout<<j<<endl;
            //break;
        //}
    }
    cout<<"test "<<wynik;
    return 0;
}
