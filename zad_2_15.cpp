#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int liczba;
    int podstawa;
    cout<<"Podaj liczbe w systemie dziesietnym oraz podstawe systemu na kotry ma zostac przekonwertowana"<<endl;
    cin>>liczba>>podstawa;
    string pom="0123456789ABCDEF";
    string temp, wynik;
    while(liczba!=0){
        temp+=pom[liczba%podstawa];
        liczba=liczba/podstawa;
    }
    for(int i=temp.size()-1; i>=0; i--){
        wynik+=temp[i];
    }
    cout<<"Liczba przekonwertowana w systemie "<<podstawa<<" to "<<wynik;
    return 0;
}
