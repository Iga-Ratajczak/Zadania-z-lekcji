#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout<<"Wprowadz imie "<<endl;
    char s[256];
    cin.getline(s,256);
    int a=strlen(s);
    cout<<"Wprowadz nazwisko "<<endl;
    char r[256];
    cin.getline(r,256);
    int b=strlen(r);
    cout<<"Ilosc znakow w imieniu wynosi "<<a<<endl;
    cout<<"Ilosc znakow w nazwisku wynosi "<<b<<endl;
    return 0;
}
