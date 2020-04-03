#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    int t[]={2,4,5,3,6,5,8,4,2,2,3};
    int n=sizeof(t)/sizeof(int);
    int m=9;
    int p[100]={0};
    for(int i=0; i<n;i++){
        p[t[i]]++;

    }
    for(int i=0;i<m;i++){
        for(int k=1;k<=p[i];k++)
            cout<<i<<endl;
    }
 return 0;
}
