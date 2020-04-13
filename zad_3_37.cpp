#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char s[256];

    cout<<"wpisz tekst"<<endl;
    cin.getline(s,256);

    int a = strlen(s);
    string nowy;
    int b;

    for(int i=0; i<a; i++){

        if(s[i]!=' '){
            nowy+=s[i];
            b=nowy.size();
        }

        //wypisywanie wyrazu jezeli wyraz ma nieprazysta ilosc znakow i zaczyna sie na p
        else if(b%2!=0 && s[i-b]=='p'){
            cout<<nowy<<endl;
            nowy.clear();
        }

        //wypisywanie ostatniego wyrazu jezeli nie ma po nim spacji
        if(s[i]!=' ' && i==a-1 && b%2!=0 && s[a-b]=='p'){
            cout<<nowy<<endl;
        }

        //czyszczenie b gdy jest spacja
        if(s[i]==' '){
            nowy.clear();
        }
    }

    return 0;
}
