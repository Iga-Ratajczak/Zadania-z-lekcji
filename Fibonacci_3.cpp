#include<iostream>
#include<cmath>
using namespace std;

int fib(int m){

int a=0,b=1;
if(m<=1)
    return m;

else{
    for(int i=2;i<=m;i++){
        b=a+b;
        a=b-a;
    }
        return b;
    }

}

main(){
    int m;
    cin>> m;
  //  cout<<fib(m)<<endl;
    for (int i=0;i<=m;i++)
        cout<<i<<"  "<<fib(i)<<endl;
    return 0;
}

