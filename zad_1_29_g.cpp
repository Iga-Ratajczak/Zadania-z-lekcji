#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n=5,w,k;
    for(w=1;w<=n;w++){
        for(k=1;k<=n;k++)
        if((k+w)%2==0&&(w==1||w==5||k==3))
        cout<<"* ";
        else if((k+w)%2!=0&&(w==1||w==5||k==3))
            cout<<"@ ";
        else
            cout<<"  ";
        cout<<endl;
    }
        return 0;

}

