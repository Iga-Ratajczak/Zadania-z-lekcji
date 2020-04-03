#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
int m;
cout<<"Podaj liczbe n, dla ktorej zostana wygenerowne wszystkie liczby z przedzialu [2,n] "<<endl;
cin>>m;
int n=m+1;
int x[n];
for(int i=2;i<n;i++){
        x[i]=1;
}
int p=0;

for(int i=2;i<n;i++){
        p=i;
    for(p+=i;p<n;p+=i){
    x[p]=0;
    }
}

for(int i=2;i<n;i++){
cout<<"Liczba "<< i;
if(x[i]==0)
    cout<<" nie jest liczba pierwsza ";
else
    cout<<" jest liczba pierwsza";
cout<<endl;
}

return 0;
}
