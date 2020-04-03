#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>


using namespace std;


int main(){
int x[7]={-3,0,0,3,0,-2,0};
int p=1;
int l=x[0];
for(int i=1;i<7;i++){
    if(p==0){
        l=x[i];
        p=1;
    }
    else if(x[i]==l)
        p++;
    else
        p--;
}
int licz=0;
for(int i=0;i<7;i++){
    if(x[i]==l)
        licz++;
}
if(licz>7/2)
    cout<<"w zbiorze jest lider";
else
    cout<<"brak lidera";
return 0;
}
