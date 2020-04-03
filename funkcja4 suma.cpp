#include<iostream>
#include<cmath>
using namespace std;


int suma1(int n){
    return n*(n+1)/2;
}
int suma2(int n){
    int s=0;
    for(int i=1;i<=n;i++)
        s=s+i;
    return s;

}

int main(){
    cout<<sqrt(5)<<endl;
    cout<<suma1(5)<<endl;
    cout<<suma2(2)<<endl;

        return 0;

}

