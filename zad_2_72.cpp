#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string b_sort(string s){
    int dl = s.size();
    for(int i=0; i<dl; i++){
        for(int j=1; j<dl; j++){
            if(s[j-1]>s[j]){
                int pom = s[j];
                s[j]=s[j-1];
                s[j-1]=pom;
            }
        }
    }
    return s;
}


int main(){
    cout<<"Program sprawdzi czy podane slowa sa anagramami."<<endl<<endl<<"Podaj ilosc slow ktora program ma sprawdzic."<<endl;
    int size;
    cin>>size;

    cout<<"Wpisz slowa"<<endl;
    string *slowo = new string [size];
    for(int i=0; i<size; i++){
        cin>>slowo[i];
    }
    int temp =true;

    for(int i=1; i<size; i++){
        if(b_sort(slowo[i-1])!=b_sort(slowo[i]))
            temp = false;
    }

    if(temp)
        cout<<"Podane slowa sa angramami";
    else
        cout<<"Podane slowa nie sa anagragramami";

    delete [] slowo;
    return 0;
}
