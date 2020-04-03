#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
int n,x,max;
cin>>n;
cin>>x;
max=x;
for(;n>1;n--){
    cin>>x;
    if(x>max)
        max=x;
}
cout<<max;

 return 0;
}
