#include<iostream>
#include<cmath>
using namespace std;

int silnia(int n){
   int s=1;
    while(n>1){
        s=s*n;
        n--;
        }
    return s;
}
int main(){


    int n;
     cin>>n;
        cout<<"suma jest rowna "<< silnia(n);



}

