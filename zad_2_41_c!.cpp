#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>


using namespace std;


int main(){
int x[8]={9,6,7,6,2,2,2,2};
int p=1;
int l=x[0];
for(int i=1;i<8;i++){
    if (p==0)
        l=x[i];
    else if(x[i]==l)
        p++;
    else
        p--;
}
int licz=0;
for(int i=0;i<8;i++){
    if(x[i]==l)
        licz++;
}

if(licz>8/2)
    cout<<"jest lider";
else
    cout<<"brak lidera";
return 0;
}
