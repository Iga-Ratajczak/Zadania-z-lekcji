#include<iostream>
#include<cmath>
using namespace std;

int a(int n){
if(n==1)
    return 4;
return a(n-1)+3;



}

main(){
    for(int i=1;i<=10;i++)
    cout<<a(i)<<endl;

    return 0;
}

