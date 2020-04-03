#include<iostream>
#include<cmath>
using namespace std;

int nwd(int a, int b){
if (a==b)
    return a;
if(a>b)
    return nwd(a-b,b);
return nwd(a,b-a);
}


main(){

    cout<<nwd(30,72)<<endl;

    return 0;
}

