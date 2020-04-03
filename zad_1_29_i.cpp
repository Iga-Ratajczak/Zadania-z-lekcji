#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n=5,w,k;
    for(w=1;w<=n;w++){
        for(k=1;k<=n;k++)
        if((k==w||k+w==n+1)&&k!=3)
        cout<<"# ";
        else if(k==3||w==3)
        cout<<"* ";
        else
            cout<<"  ";
        cout<<endl;
    }
        return 0;

}

