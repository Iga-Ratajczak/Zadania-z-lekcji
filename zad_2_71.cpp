#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    cout<<"Program sprawdzi czy podane dwa slowa sa anagramami."<<endl<<endl<<"Wpisz pierwsze slowo skladajace sie tylko z 'a' 'b' 'c'."<<endl;
    string s1;
    cin>>s1;
    cout<<"Wpisz 2 slowo skladajace sie tylko z 'a' 'b' 'c'."<<endl;
    string s2;
    cin>>s2;
    int dl=s1.size();
    int dl2=s2.size();

    int a=0, b=0, c=0;
    for(int i=0; i<dl; i++){
        if(s1[i]=='a')
        a++;
        else if(s1[i]=='b')
        b++;
        else c++;
    }

    if(dl!=dl2)
        cout<<"Slowa nie sa anagramami - roznia sie iloscia znakow."<<endl;
   else{
    int temp = 0;
    for(int i=0; i<dl; i++){
        if(s2[i]=='a')
            temp++;
    }

    if(a==temp){
        temp=0;
        for(int i=0; i<dl; i++){
        if(s2[i]=='b')
            temp++;
        }
        if(b==temp){
            temp=0;
            for(int i=0; i<dl; i++){
            if(s2[i]=='c')
                temp++;
            }
            if(c==temp)
                cout<<"Slowa sa anagramami."<<endl;
        }
        }
    else
        cout<<"Slowa nie sa angramami - ilosc danego znaku jest rozna dla slow."<<endl;
   }
    return 0;
}
