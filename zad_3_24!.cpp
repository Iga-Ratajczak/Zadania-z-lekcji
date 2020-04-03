#include<iostream>
#include<cmath>


using namespace std;


for(x[i];i>=0;i--){
    cout<<x[i]<<endl;
int main(){
int n;
cout<<"Podaj ilosc elementow tablicy: ";
cin>>n;
cout<<endl<<"Wpisz dane"<<endl;
int i=0;
int x[i];
for(;i<n;i++){
    cin>>x[i];
}

for(int j=n-1;j>0;j--){
    for(int i=0;i<j;i++){
        if(x[i]>x[i+1]){
        int p=x[i];
        x[i]=x[i+1];
        x[i+1]=p;
    }
    }
}
cout<<"Od najmniejszej do najwiekszej"<<endl;
i=0;
for(x[i];i<n;i++){
    cout<<x[i]<<endl;
}
 return 0;
}
