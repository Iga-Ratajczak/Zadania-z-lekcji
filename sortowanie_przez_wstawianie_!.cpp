#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
int x[8]={1,2,8,7,10,2,3,5};
int pom;
int k;

for(int i=1;i<8;i++){
    pom=x[i];
    k=i-1;
    for(;k>=0&&x[k]>pom;k--){
        x[k+1]=x[k];
    }
    x[k+1]=pom;

    }
for(int i=1;i<8;i++){
        cout<<x[i]<<endl;
}
return 0;
}
