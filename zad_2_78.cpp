#include <iostream>

using namespace std;

string szyfrowanie(string jawny, int klucz[], int il_kolumn){
    int dl = jawny.size();
    int il_wierszy;
    if(dl%il_kolumn)
        il_wierszy = dl/il_kolumn+1;
    else
        il_wierszy = dl/il_kolumn;
    char tab [il_wierszy][il_kolumn];

    //wpisanie do tablicy
    int n = 0;
    for(int i=0; i<il_wierszy; i++){
        for(int j=0; j<il_kolumn; j++){
            if(n<dl){
            tab[i][j]=jawny[n];
            n++;
            }
            else tab[i][j]='\0';
            cout<<tab[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;
    string wynik;
    //szyforwanie

    for(int k=0; k<il_kolumn; k++){
        int l=klucz[k];
        for(int i=0; i<il_wierszy; i++){
            //dodajesz!!
            wynik+=tab[i][l];
            }
        }
   // cout<<endl<<endl;
    return wynik;
}



int main(){
    string jawny="uczciwosczbierapochwalyiumierazzimna";
    int klucz []={3,2,0,1};
    int kolumny = 4;
    string wynik = szyfrowanie(jawny, klucz, kolumny);
    cout<<wynik<<endl<<jawny.size()<<endl<<wynik.size();
    return 0;
}
