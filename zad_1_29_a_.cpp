#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n=5,w,k;
    for(w=1;w<=n;w++){
        for(k=1;k<=n;k++)
        if((k+w)%4==0)
        cout<<"* ";
        else if((k==2||w==2)&&(k+w)%6==0)
        cout<<"* ";
        else
            cout<<"  ";
        cout<<endl;
    }
        return 0;

}

