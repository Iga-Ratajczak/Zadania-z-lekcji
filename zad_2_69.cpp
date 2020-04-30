#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string x_sort(string s){
    int dl=s.size();

    for (int i=0; i<dl; i++){
        for(int j=i+1; j<dl; j++){
            if(s[i]>s[j]){
                char pom = s[i];
                s[i]=s[j];
                s[j]=pom;
            }
        }
    }
    return s;
}
string b_sort (string s){
    int dl=s.size();

    for(int i=0; i<dl; i++){
        for(int j=0; j<dl-1; j++){
            if(s[j]>s[j+1]){
                char pom = s[j];
                s[j]=s[j+1];
                s[j+1]=pom;
            }
        }
    }
    return s;
}
string insert_sort(string s){
    int dl=s.size();
    for(int i=1;i<dl;){
        char pom = s[i];
        int j=i-1;
        for(; j>=0 && s[j]>pom;){
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=pom;
        i++;
        }
    return s;

}

int main(){
    cout<<"Wpisz ciag malych liter."<<endl;
    string ciag;
    getline(cin,ciag);
    ciag.erase(remove(ciag.begin(), ciag.end(), ' '), ciag.end());
    cout<<"sorotwanie "<<x_sort(ciag)<<endl<<endl;
    cout<<"sorotwanie babelkowe "<<b_sort(ciag)<<endl;
    cout<<"sorotwanie przez wstawianie "<<insert_sort(ciag);

    return 0;
}
