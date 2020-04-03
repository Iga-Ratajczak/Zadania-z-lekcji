#include<iostream>
#include<cmath>
using namespace std;

void dzielnik(int c){
if (c==0)
    cout<<"jest nieskonczenie wiele dzielnikow dla 0";

for(int a=1;a<=c;a++)
    if(c%a==0)
    cout<< a<<endl;

}



main(){

    dzielnik(20);

    return 0;
}

