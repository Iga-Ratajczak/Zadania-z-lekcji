#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
int x[5][6];
for(int w=0;w<5;w++){
    for (int k=0;k<6;k++){
        x[w][k]=w+k;
        cout<<x[w][k]<<"\t";
    }
    cout<<endl;
}

cout<<"wypisanie tablicy z zamiana kolumn numer 1 i 2"<<endl;
int p;
for(int w=0;w<5;w++){
    for (int k=0;k<6;k++){
        if(k==1){
                p=x[w][k];
                x[w][k]=x[w][k+1];
                x[w][k+1]=p;
        }
        cout<<x[w][k]<<"\t";
    }
    cout<<endl;
}
int m,n;
cout<<"wypisanie tablicy z zamiana wierszy podanych przez uzytkownika. Podaj numery wierszy"<<endl;
cin>>m;
cin>>n;
for(int w=0;w<5;w++){
    for (int k=0;k<6;k++){
        if(m==w){
                p=x[w][k];
                x[w][k]=x[n][k];
                x[n][k]=p;
        }
        cout<<x[w][k]<<"\t";
    }
    cout<<endl;
}
return 0;
}
