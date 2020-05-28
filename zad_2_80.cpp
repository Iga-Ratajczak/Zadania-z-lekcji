
#include <iostream>

using namespace std;

string odszyfrowanie(string zaszyfrowany, int klucz[], int il_kolumn){
    int dl = zaszyfrowany.size();
    int il_wierszy;
    if(dl%il_kolumn)
        il_wierszy = dl/il_kolumn+1;
    else
        il_wierszy = dl/il_kolumn;
    //char tab [il_wierszy][il_kolumn];      // #zmiana - choæ na pierwszy rzut oka nie powoduje b³êdu
    //char tab [il_wierszy][il_kolumn]={0};  //    tak te¿ dzia³a
    char tab [100][100]={0};     // #zmiana


    //wpisanie do tablicy
    int n = 0;
    for(int i=0; i<il_kolumn; i++){
        int l=0;
        for(int j=0; j<il_wierszy; j++){
            if(klucz[i]<dl%il_kolumn){
                if(l<dl%il_kolumn){
                    tab[j][klucz[i]]=zaszyfrowany[n];
                    n++;
                    l++;
                }
            }
            else{
                if(l<dl%il_kolumn-1){
                    tab[j][klucz[i]]=zaszyfrowany[n];
                    n++;
                    l++;
                }
            }
        }
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
            if (tab[i][j]!=0)               // #zmiana - tu by³a dodawana spacja
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
    //int klucz[kolumny];   // #zmiana  -  poni¿ej poprawnie, choæ nie to by³o Ÿród³em b³êdu
    int* klucz=new int[kolumny];     // #zmiana
    for(int i=0; i<kolumny; i++){
        cin>>klucz[i];
    }
    string wynik = odszyfrowanie(zaszyfrowany, klucz, kolumny);
    cout<<wynik;
    delete [] klucz;  // #zmiana - zwolnienie pamiêci zajmowanej przez tablicê dynamiczn¹ na stercie
    return 0;
}
