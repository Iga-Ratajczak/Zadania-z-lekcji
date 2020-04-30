#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define RANGE 255
bool napis(string s, int &poz){
    int n=s.size();
    for(int i=0; i<n;i++ ){
    //sprawdzanie czy pierwszy wyraz jest slowem napis
        if(i==0 ){
            if(s[i]=='n')
                if(s[i+1]=='a')
                    if(s[i+2]=='p')
                        if(s[i+3]=='i')
                            if(s[i+4]=='s')
                                if(s[i+5]==' ' || i+4==n-1){
                                    poz=i;
                                    return true;
                                }
            }

    // sprawdzanie czy kolejne wyrazy sa slowem napis
        if(s[i]==' '){
             if(s[i+1]=='n')
                if(s[i+2]=='a')
                    if(s[i+3]=='p')
                        if(s[i+4]=='i')
                            if(s[i+5]=='s')
                                if(s[i+6]==' ' || i+5==n-1){
                                    poz=i+1;
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
