#include<iostream>
#include<cmath>
using namespace std;

int silnia(int n){
   int s=1,i=1;
    while(i<=n){
        s=s*i;
        i++;
        }
    return s;
}
int main(){


    int n;
     cin>>n;
     for(int k=0;k<=n;k++)
        cout<<k<<"!="<< silnia(k)<<endl;



}

