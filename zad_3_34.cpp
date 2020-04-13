#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[] = {"skakanka"};
    //ilosc a w tekscie
    int pom = 0;
    int a = strlen(s);
    for(int i=0; i<a; i++){
        if(s[i]== 'a')
            pom++;
    }
    if(pom>0)
        cout<<"Ilosc znakow a w tekscie wynosi "<<pom<<endl;
    else
        cout<<"Nie ma znaku a w tekscie"<<endl;
        //ilosc a w tekscie
    pom = 0;
    for(int i=0; i<a; i++){
        if(s[i] != 'B' && i%2!=0)
            pom++;
    }
    if(pom>0)
        cout<<"W tekscie jest tyle znakow roznych od B o numerze parzystym "<<pom<<endl;
    else
        cout<<"Nie ma znakow, o numerze parzystym, roznych od B, w tekscie"<<endl;
    return 0;
}
