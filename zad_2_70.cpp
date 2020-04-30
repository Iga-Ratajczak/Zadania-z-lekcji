#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main(){
    cout<<"Podaj ilosc wyrazow ktore chcesz uporzadkowac alfabetycznie"<<endl;
    int size;
    cin>>size;

    cout<<"Wpisz ciag malych liter."<<endl;

    //nie wiesz jak duzy bedzie ciag znakow - dynamiczna
    //miejsce tab[i] ma zarezerwowac sobie [size] miejsca na podstawie wpisanego tekstu
    //dzieki string - konwertuje znak prawidlowo
    //ignoruje przejscia do nowej lini - nie rezerwuje im "wiersza"
    cin.ignore();
    string *slowo = new string [size];
    for(int i=0;i<size;i++){
    //cin lepsze od getline jak masz wpisywac tylko jedno slowo!!
        cin>>slowo[i];
    }

    for (int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(slowo[i]>slowo[j]){
                string pom = slowo[i];
                slowo[i]=slowo[j];
                slowo[j]=pom;
                }
        }
    }

    cout<<endl<<"Posortowano"<<endl;

     for (int i=0; i<size; i++){
        cout<<slowo[i]<<endl;
     }

    delete[] slowo;
    return 0;
}
