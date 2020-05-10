#include <iostream>

using namespace std;

string odszyfrowanie(string zaszyfrowany, int klucz[], int il_kolumn){
    int dl = zaszyfrowany.size();
    int il_wierszy;
    if(dl%il_kolumn)
        il_wierszy = dl/il_kolumn+1;
    else
        il_wierszy = dl/il_kolumn;
    char tab [il_wierszy][il_kolumn];

    //wpisanie do tablicy
    int n = 0;
    for(int k=0; k<il_kolumn; k++){
        int l=klucz[k];
        for(int i=0; i<il_wierszy; i++){
            if(n<dl){
                tab[i][l]=zaszyfrowany[n];
                n++;
            }
            else
                tab[i][l]='\0';
            //cout<<tab[i][l]<<"\t";
        }
        //cout<<endl;
    }

    for(int i=0; i<il_wierszy; i++){
        for( int j=0; j<il_kolumn; j++){
            cout<<tab[i][j]<<"\t";
        }
        cout<<endl;
    }

    string wynik;
    for(int i=0; i<il_wierszy; i++){
        for( int j=0; j<il_kolumn; j++){
                wynik+=tab[i][j];
        }
    }
    return wynik;
}



int main(){
    string zaszyfrowany;
    cout<<"Wpisz zaszyfrowany tekst bez spacji"<<endl;
    cin>>zaszyfrowany;
    cout<<"Wpisz ilosc kolumn"<<endl;
    int kolumny;
    cin>>kolumny;

    cout<<"Wpisz klucz wedlug ktorego tekst ma zostac odszyfrowany"<<endl;
    int klucz[kolumny];
    for(int i=0; i<kolumny; i++){
        cin>>klucz[i];
    }
    string wynik = odszyfrowanie(zaszyfrowany, klucz, kolumny);
    cout<<wynik;
    return 0;
}
