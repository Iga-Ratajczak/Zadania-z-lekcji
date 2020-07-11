#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int horner(int tab[], int podstawa, int n){
    int wynik=tab[0];
    for(int i=1;i<n; i++){
        wynik=wynik*podstawa+tab[i];
        //cout<<wynik<<endl;
    }
    return wynik;
}

int potega( int tab[], int podstawa, int n){
    int wynik=0;
    for(int i=0;i<n; i++){
        wynik+=pow(podstawa,n-1-i)*tab[i];
        //cout<<wynik<<endl;
    }

    return wynik;
}

int wart_wiel3( int tab[], int podstawa, int n){
    int wynik=0;
    // kolejne potêgi podstawy od 0 do n
    int pot=1;

    //zaczynam od najmniej znacz¹cej cyfry
    for(int i=n-1; i>=0; i--){
        wynik+=pot*tab[i];
        pot*=podstawa;
     }

    return wynik;
}
int main(){
    int podstawa;
    string liczba;
    cout<<"Podaj podstawe systemu oraz liczbe w nim zapisana ktora ma zostac przekonwertowana na system dziesietny"<<endl;
    cin>>podstawa>>liczba;
    int n=liczba.size();
    int *tab = new int [n];
    string pom="ABCDEF";
    string pom2="abcdef";
    int x=pom.size();
    int wartosc[x]={10,11,12,13,14,15};
    //konwertowanie liczby z stringa na int
    for(int i=0; i<n; i++){
        int temp=0;
        for(int j=0; j<x; j++){
            if(liczba[i]==pom[j] || liczba[i]==pom2[j]){
                tab[i]=wartosc[j];
                //cout<<tab[i]<<" ";
                temp++;
            }
        }
        if(temp==0){
            tab[i]=liczba [i]-48;
            //cout<<tab[i]<<" ";
        }
    }

    int wynik=horner(tab,podstawa,n);
    cout<<"Liczba przekonwertowana w systemie 10 z uzyciem hornera to "<<wynik<<endl;
    int wynik2=potega(tab,podstawa,n);
    cout<<"Liczba przekonwertowana w systemie 10 z uzyciem pow to "<<wynik2<<endl;
    int wynik3=wart_wiel3(tab,podstawa,n);
    cout<<"Liczba przekonwertowana w systemie 10 bez uzycia pow to "<<wynik3;

    delete [] tab;
    return 0;
}
