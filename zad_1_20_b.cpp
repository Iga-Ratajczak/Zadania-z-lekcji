#include<iostream>
using namespace std;
int main (){

int i,a=1,n=1, s=1;
cin>> i;
while(a<=i){
    s=s*n;
    n=n*-2;
    a++;
}
cout <<s;

}
