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

    //usuwanie spacji
    zdanie.erase(remove( zdanie.begin(), zdanie.end(), ' '),zdanie.end());
    a=zdanie.size();

    //sprawdzanie czy zdanie jest palindromem
    if (palindrom(zdanie))
        cout<<"zdanie jest palindromem"<<endl;
    else
        cout<<"zdanie nie jest palindromem"<<endl;
    return 0;
}
