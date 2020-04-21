#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string b_sort(string s){
    int dl=s.size();

    for (int i=0; i<dl; i++){
        for(int j=i+1; j<dl; j++){
            if(s[i]>s[j]){
                char pom = s[i];
                s[i]=s[j];
                s[j]=pom;
            }
        }
    }
    return s;
}

string insert_sort(string s){
    int dl=s.size();
    for(int i=1;i<dl;){
        char pom = s[i];
        int j=i-1;
        for(; j>=0 && s[j]>pom;){
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=pom;
        i++;
        }
    return s;

}

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
        getline(cin, slowo[i]);
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
