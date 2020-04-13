#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
int n=20;
int x[n];
for(int i=0;i<n;i++){
        x[i]=0;
}
for(int i=2;i<n;i++){
        x[i]=1;
}
int p=0;
    for(int i=2;i<n;i++){
            p=i;
        for(p+=i;p<n;p+=i){
        x[p]=0;
    }
}
int pom[n];
int m=n;
    for(int i=0;i<n;i++){
        if(x[i]>0){
            while(m%i==0){
                cout<<i<<endl;
                m=m/i;
            }
    }
    }

return 0;
}
