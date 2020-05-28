#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define RANGE 255

//nie prawdilowe brak wzorca w tekscie tylko sprawdza czy slowo napis jest osobne
bool napis(string s, int &poz){
    string wzor="napis";
    int dlw = wzor.size();
    int dls = s.size();

    for(int i=0; i<dls;i++ ){
    //sprawdzanie czy pierwszy wyraz jest slowem napis
    //sprawdzanie czy slowo napis nie jest zawarte w innym slowie - poczatek
        if(i==0 && s[i]!=' '){
        //- koniec
            if(s[i+dlw]==' ' || dlw == dls){
                poz=s.find(wzor);
                return true;
            }
        }

    // sprawdzanie czy kolejne wyrazy sa slowem napis
    //sprawdzanie czy slowo napis nie jest zawarte w innym slowie - poczatek
        if(s[i]==' '){
            //- koniec
            if(s[i+dlw+1]==' ' || 1+dlw+i==dls){
                poz=s.find(wzor);
                return true;
            }
        }
    }

    return false;
}
int main(){
    cout<<"Program sprawdzi czy w podanym ciagu znajduje sie slowo 'napis'. Wpisz slowa"<<endl<<endl;
    string zdanie;
    getline(cin, zdanie);
    cout<<zdanie.size()<<endl;
    string wzor="napis";
    int pozycja;
    pozycja=zdanie.find(wzor);
    cout<<pozycja<<endl;
    if(pozycja>=0)
        cout<<"slowo zaczyna sie na pozycji "<<pozycja<<endl;
    else
        cout<<"W danym ciagu nie ma slowa 'napis' "<<endl;

    return 0;
}
