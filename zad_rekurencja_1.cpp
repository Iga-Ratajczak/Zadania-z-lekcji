#include<iostream>
#include<cmath>
using namespace std;

void gwiazdki(int n){
   cout<<"*";
   if(n>1)
        gwiazdki(n-1);
        }
int main(){


    int n;
     cin>>n;
     gwiazdki(n);
     cout<<endl;



}

