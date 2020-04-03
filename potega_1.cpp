#include<iostream>
#include<cmath>
using namespace std;

int potega(int a,int n){
int s=1;
for(int i=1;i<=n;i++)
    s=s*a;
return s;


}

main(){

    cout<<potega(2,5)<<endl;

    return 0;
}

