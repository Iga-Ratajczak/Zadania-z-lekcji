#include <iostream>

using namespace std;

string szyfrowanie(string jawny){
    int dl=jawny.size();

    string wynik;
    for(int i=0; i<dl; i+=2)
        wynik+=jawny[i];
        cout<<wynik<<endl;
    for(int i=1; i<dl; i+=2)
        wynik+=jawny[i];
    return wynik;
}

int main(){
    string jawny = "wlasnemaleogniskocenniejszeodstosuzlota";
    //cout<<jawny.size();
    string wynik;
    wynik = szyfrowanie(jawny);
    cout<<wynik;
}
