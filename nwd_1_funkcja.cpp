#include<iostream>
#include<cmath>
using namespace std;

int nwd(int a, int b){
while (a!=b){
    if(a>b)
        a=a-b;
    else
        b=b-a;
}
return a;



}

main(){

    cout<<nwd(30,72)<<endl;

    return 0;
}

