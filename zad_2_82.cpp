#include <iostream>

using namespace std;

string odszyfrowanie(string zaszyfrowany,int il_wierszy){
    int dl = zaszyfrowany.size();
    string wynik[dl];
    int n=0;
    for(int i=0; i<dl; i+=4){
        wynik[i]=zaszyfrowany[n];
        n++;
    }
    for(int i=1; i<dl; i+=2){
        wynik[i]=zaszyfrowany[n];
        n++;
    }
    for(int i=2; i<dl; i+=4){
        wynik[i]=zaszyfrowany[n];
        n++;
    }

    //musisz konwertowac z tablicy na strinfga zwyklego?!
    string odszyfr;
    for(int i=0; i<dl; i++)
        odszyfr+=wynik[i];

    return odszyfr;

}



int main(){
    string zaszyfrowany="bzoijpyecynsneaedoznuzncdock";
    int wiersze = 3;
    string wynik=odszyfrowanie(zaszyfrowany, wiersze);
    cout<<wynik;
    return 0;
}
