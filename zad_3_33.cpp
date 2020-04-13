#include <iostream>
#include <cstring>
using namespace std;

int main(){

    cout<<"Wprowadz tekst "<<endl;
    char s[256];
    cin.getline(s,256);
    //ilosc znakow
    int a = strlen(s);
    // wypisuje 1 znak +1 spacja
    for(int i=0; i<a; i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;

    // wypisuje 1 znak +1 spacja, czytany od konca
    for(int i=a; i-1>=0; i--){
        cout<<s[i-1]<<" ";
    }
    cout<<endl;

      // wypisuje 2 znaki +1 spacja
    for(int i=0; i<a; i+=2){
        cout<<s[i]<<s[i+1]<<" ";
    }
    cout<<endl;

    // wypisuje 3 znaki +2 spacje, czytany od konca
    for(int i=a-1; i>=0; i-=3){
       cout<<s[i]<<s[i-1]<<s[i-2]<<" ";
    }


    return 0;
}
