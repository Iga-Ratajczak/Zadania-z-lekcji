#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
void czytaj(int x[], int n){
for (int i=0; i<n;i++)
    cin>>x[i];
}

bool podzielna(int x[]){
srand(time(0));
int l=0;
cout<<"wylosowane liczby: "<<endl;
for(int i=0;i<10;i++){
    x[i]=rand()%36+6;
    if (x[i]%3!=0)
        l++;
    cout<<x[i]<<endl;
}
if (l>0)
    return false;
else
    return true;
}
int main(){
int x[10];

cout<<"jezeli podaje 1 - wszystkie liczby sa podzielne przez 3. Wynik =  "<<podzielna (x);


 return 0;
}
