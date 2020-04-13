#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char s[256];

    cout<<"wpisz tekst"<<endl;
    cin.getline(s,256);

    //wypisywanie wyrazow w kolumnie
    int a = strlen(s);
    for(int i=0; i<a;i++){
        if(s[i]==' ')
            cout<<endl;
        else
            cout<<s[i];
    }
    cout<<endl<<endl;


    string nowy;
    int b;

    for(int i=0; i<a; i++){

        if(s[i]!=' '){
            nowy+=s[i];
            b=nowy.size();
        }

        //wypisywanie wyrazu jezeli jego ostatni i pierwszy znak jest taki sam
        else if(s[i-1]==s[i-b]){
            cout<<nowy<<endl;
            nowy.clear();
        }

        //wypisywanie ostatniego wyrazu jezeli nie ma po nim spacji
        if(s[i]!=' ' && i==a-1 && s[i]==s[a-b]){
            cout<<nowy<<endl;
        }

        //czyszczenie b gdy jest spacja
        if(s[i]==' '){
            nowy.clear();
        }
    }

    return 0;
}
