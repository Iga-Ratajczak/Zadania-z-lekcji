#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>


using namespace std;


int main(){
int n;
cout<<"Podaj ilosc elementow tablicy: ";
cin>>n;
cout<<endl<<"o to dane"<<endl;
srand(time(0));
int x[n];
for(int i=0;i<n;i++){
    x[i]=rand()%121-1;
    cout<<x[i]<<endl;
}
int m;
m=x[0];
for(int i=0;i<n;i++){
    if(x[i]>m)
        m=x[i];
}
cout<<"max to "<<m<<endl;
int l=0;
for(int i=0;i<n;i++){
    if(x[i]==m)
        l++;
}
cout<<"Najwieksza wartosc wystepuje "<<l<<" razy w zbiorze";
 return 0;
}
