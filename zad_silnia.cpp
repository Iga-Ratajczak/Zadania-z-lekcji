#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n,s=1;
        cin>>n;
        while(n>1){
            s=s*n;
            n--;
        }
        cout<<"suma jest rowna "<< s;



}

