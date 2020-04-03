#include<iostream>
#include<cmath>
using namespace std;

int dzielnik(int c){
if (c==0){
    cout<<"jest nieskonczenie wiele dzielnikow dla ";
return c;
}
for(int a=1;a<c;a++){
    if(c%a==0)
    cout<< a<<endl;
}return c;
}



main(){

    cout<<dzielnik(20)<<endl;

    return 0;
}

