#include <iostream>

using namespace std;
int szukaj(double T[], int lewy, int prawy, int szukana){
    if(lewy<=prawy){
        int srodek=(lewy+prawy)/2;
        if(T[srodek]==szukana)
            return szukana;
        if(T[srodek]>szukana)
            return szukaj(T,lewy, srodek-1, szukana);
        return szukaj(T, srodek+1, prawy, szukana);
    }
    return -1;
}

int main(){
    cout<<"Podaj ilosc wyrazow ciagu"<<endl;
    int n;
    cin>>n;
    cout<<"Podaj kolejne wyrazy uporzadkowanego ciagu"<<endl;
    double *tab= new double [n];
    for(int i=0; i<n; i++){
        cin>>tab[i];
    }
    cout<<"Podaj szukana wartosc"<<endl;
    double szukana;
    cin>>szukana;

    int wynik=szukaj(tab, tab[0], tab[n-1], szukana);
    if(wynik==-1){
        cout<<"W podanym ciagu nie ma takiej wartosci"<<endl;
    }
    else
        cout<<"Znaleziono podana wartosc"<<endl;
    delete[] tab;
    return 0;
}
