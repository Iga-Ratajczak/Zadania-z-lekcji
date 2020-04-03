#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
void czytaj(int x[], int n){
for (int i=0; i<n;i++)
    cin>>x[i];
}
bool monotonicznosc(int x[], int n){
for(int i=0;i<n-1;i++)
    if(x[i]<=x[i+1])
    return false;
return true;
}

int main(){
int n;
int x[100];
cin>>n;
czytaj(x,n);
cout<<monotonicznosc(x,n);

 return 0;
}
