#include<iostream>
#include<cmath>
using namespace std;

int potega(int a,int n){
if(n==0)
    return 1;
return potega(a,n-1)*a;



}

main(){

    cout<<potega(2,5)<<endl;

    return 0;
}

