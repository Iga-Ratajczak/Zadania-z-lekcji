#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define RANGE 255
bool napis(string s, int &poz){
    int n=s.size();
    string wzor="napis";
    int dlw = wzor.size();
    int temp=0;

    for(int i=0; i<n;i++ ){
        if(s[i]=='n'){
                for(int j=0; j<dlw; j++){
                    if(s[i]!=wzor[j]){
                        temp++;
                    }
                    i++;
                }
                if(temp==0){
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
    int pozycja;


    if(napis(zdanie, pozycja)==true)
        cout<<"slowo zaczyna sie na pozycji "<<pozycja<<endl;
    else
        cout<<"W danym ciagu nie ma slowa 'napis' "<<endl;

    return 0;
}
