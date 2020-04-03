#include<iostream>
#include<cmath>
using namespace std;

void gwiazdki(int n){
   if(n<1) return;
   cout<<"*";
   gwiazdki(n-1);
        }
int main(){


    int n;
     cin>>n;
     gwiazdki(n);
     cout<<endl;



}

