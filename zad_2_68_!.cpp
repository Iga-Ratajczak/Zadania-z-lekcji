#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool palindrom(string zdanie){
    int a=zdanie.size();
    for(int i=0;i<a/2;i++){
            if(zdanie[i]!=zdanie[a-1-i])
                return false;
        }
    return true;
}

int main(){
    cout<<"Wpisz zdanie. Program sprawdzi czy jest on palindromem."<<endl;
    string zdanie;
    getline(cin,zdanie);

    int a=zdanie.size();

    //usuwanie spacji petla
    string s;
        for(int i=0; i<a; i++){
            if(zdanie[i]!=' ')
                s+=zdanie[i];
        }
    cout<<"zdanie nie zmienia sie, nowy string bez spacji"<<endl<<zdanie<<endl<<s<<endl;

    // usuwanie spacji sposob drugi

    // Funkcja remove zwraca koniec nowego zdania, tego krótszego, czyli po usuniêciu spacji.
    // metoda erase usuwa znaki od nowego koñca do starego. Po tej akcji nowy koniec staje siê rzeczywistym koñcem obiektu zdanie.
    zdanie.erase(remove( zdanie.begin(), zdanie.end(), ' '),zdanie.end());
    a=zdanie.size();
    cout<<endl<<"zmiana zdania"<<endl<<zdanie<<endl;

    //sprawdzanie czy zdanie jest palindromem
    if (palindrom(zdanie))
        cout<<endl<<"zdanie jest palindromem"<<endl;
    else
        cout<<"zdanie nie jest palindromem"<<endl;
    return 0;
}
