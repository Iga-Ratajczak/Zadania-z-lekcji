#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define RANGE 255
bool napis(string s, int poz []){
    int dls=s.size();
    string wzor = "napis";
    int dlw = wzor.size();

    if(dls<dlw) return false;

    int n=0,j;

    for(int i=0; i<dls-dlw+1;i++ ){
        for(j=i; j<i+dlw; j++){
            if(s[j]!=wzor[j-i])
                break;
        }
        if(j==i+dlw){
            poz[n]=i;
            n++;
        }
    }
    if(n==0) return false;
    return true;
}

int main(){
    cout<<"Program sprawdzi czy w podanym ciagu znajduje sie slowo 'napis'. Wpisz slowa"<<endl<<endl;
    string zdanie;
    getline(cin, zdanie);
    int a=zdanie.size();
    int pozycja[a];
    for(int i=0; i<a;i++ ){
            pozycja[i]=0;
    }
    cout<<pozycja[0]<<endl;

    if(napis(zdanie, pozycja)==true)
        cout<<"slowo zaczyna sie na pozycji "<<*pozycja<<endl;
    else
        cout<<"W danym ciagu nie ma slowa 'napis' "<<endl;

    return 0;
}
