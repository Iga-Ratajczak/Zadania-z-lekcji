#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n=6;
    while (n>0){
        cout<<"* - | ";
        n--;
    }
    cout<<endl;


    n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<"*";
        if (i%2==0)
            cout <<"^^";
        else
            cout<<"&&";
    }
    cout<<endl;
    n=5;
    for(int i=1;i<=n;i++){
        cout<<"*";
        for(int j=1;j<=i;j++)
            if (i%2==0)
                cout<<"-";
            else
                cout<<"|";
    }

        return 0;

}

