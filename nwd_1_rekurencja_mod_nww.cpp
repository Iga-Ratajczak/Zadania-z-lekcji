#include<iostream>
#include<cmath>
using namespace std;

int nwd(int a, int b){
if (b==0)
    return a;
return nwd(b,a%b);
}

int nww(int a, int b){
return a*b/nwd(a,b);
}


main(){

    cout<<nww(20,8)<<endl;

    return 0;
}

