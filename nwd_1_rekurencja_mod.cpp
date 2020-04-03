#include<iostream>
#include<cmath>
using namespace std;

int nwd(int a, int b){
if (b==0)
    return a;
return nwd(b,a%b);
}


main(){

    cout<<nwd(30,72)<<endl;

    return 0;
}

