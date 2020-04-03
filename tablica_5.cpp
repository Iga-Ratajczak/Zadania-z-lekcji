#include<iostream>
#include<cmath>

using namespace std;

int main(){
int a;
int x[100];
cin>>a;
for(int i=0; i<a;i++)
    cin>>x[i];

int s=0;
int i=0;
int n=1;
while(i<a){
    s+=x[i];
    n*=x[i];
    i++;

}
cout<<s<<endl<<n;

 return 0;
}
