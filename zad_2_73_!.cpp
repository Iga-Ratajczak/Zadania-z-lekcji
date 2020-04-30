#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void wypisz (int t[]){
    for( int i=97;i<105; i++){
        cout<<i<<"  "<<t[i]<<endl;
    }
}

void wypelnij (string s, int t[]){
    // zerowanie tablicy
    for (int i=0; i<256; i++)
        t[i]=0;

    // zwiekszanie wartosci dla danej litery
    for( int i=0; i<s.size(); i++){
        t[(int) s[i]]++;
    }
}

//sprawdzanie czy wyrazy sa angramami - jezeli wartosc wystepowania danej literynie jest rowna to falsz
bool tosamo (int t1[], int t2[]){
    for( int i=0; i<256; i++){
        if(t1[i]!=t2[i])
            return false;
    }
    return true;
}
// sprawdzanie wszystkich wyrazow
bool sprawdzanie (string slowo[], int n){
    int t1[256], t2[256];

    wypelnij(slowo[0], t1);
    for(int i=1; i<n; i++){
       wypelnij(slowo[i], t2);
       if (tosamo(t1, t2)==false)
        return false;
    }
    return true;
    //wypisz(t1);
    //wypisz(t2);
}




int main(){
    cout<<"Program sprawdzi czy podane slowa sa anagramami."<<endl<<endl<<"Podaj ilosc slow ktora program ma sprawdzic."<<endl;
    int size;
    cin>>size;

    cout<<"Wpisz slowa"<<endl;
    string *slowo = new string [size];
    for(int i=0; i<size; i++){
        cin>>slowo[i];
    }



    if(sprawdzanie(slowo, size))
        cout<<"Podane slowa sa angramami";
    else
        cout<<"Podane slowa nie sa anagragramami";

    delete [] slowo;
    return 0;
}
