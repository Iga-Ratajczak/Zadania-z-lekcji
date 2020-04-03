#include<iostream>
#include<cmath>
using namespace std;

double a(int n){
if(n==1)
    return 0.5;
if(n==2)
    return 1;
return a(n-2)*3+a(n-1);



}

main(){
    for(int i=1;i<=10;i++)
    cout<<a(i)<<endl;

    return 0;
}

