#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
srand(time(0));
int x[15];
for(int i=0;i<15;i++){
    x[i]=rand()%11;
    cout<<x[i]<<endl;
}
cout<<"tabela pomocnicza"<<endl;
int p[11]={0};
for(int d=0;d<11;d++){
    for(int i=0;i<15;i++){
        if(x[i]==d)
            p[d]++;
    }
    }
 for(int i=0;i<11;i++){
    cout<<p[i]<<endl;
}
int l=p[0];
for(int i=1;i<11;i++){
    if(p[i]>l)
        l=p[i];
}
cout<<"to jest "<<l<<endl;
int licz=0;
for(int i=0;i<11;i++){
    if(p[i]==l)
        licz++;
}
cout<<"wartosc licz to "<<licz<<endl;
if(licz>1)
    cout<<"Nie ma najczesciej wys wartosci"<<endl;
else
    cout<<"Istnieje najczesciej wys wartosc"<<endl;
int m=10;
for(int i=1;i<11;i++){
    if(p[i]<m&&p[i]>0)
        m=p[i];
}
cout<<"to jest "<<m<<endl;
int licz2=0;
for(int i=0;i<11;i++){
    if(p[i]>0&&p[i]==m)
        licz2++;
}
cout<<"wartosc licz to "<<licz2<<endl;
if(licz2>1)
    cout<<"Nie ma najrzadziej wys wartosci"<<endl;
else
    cout<<"Istnieje najrzadziej wys wartosc"<<endl;
return 0;
}
