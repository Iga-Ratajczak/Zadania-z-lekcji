#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char s[256];

    cout<<"wpisz tekst"<<endl;
    cin.getline(s,256);

    //ilosc a w tekscie
    int a = strlen(s);
     int pom = 0;
    //znaki rozne od h
    for(int i=0; i<a; i++){
        if(s[i]!= 'h'){
            cout<<s[i]<<" ";
            pom++;
        }
    }
     if(pom==0)
        cout<<"Nie ma znakow roznych od h w tekscie"<<endl;

    cout<<endl;

    //znaki rozne od o lub O lub a lub A

    pom = 0;
    for(int i=0; i<a; i++){
        if(s[i]== 'o' || s[i]== 'O' || s[i]== 'a' || s[i]== 'A' ){
            cout<<s[i]<<" ";
            pom++;
        }
    }
    if(pom==0)
        cout<<"Nie ma znakow rownych a, A, O, o, w tekscie"<<endl;
    return 0;
}
