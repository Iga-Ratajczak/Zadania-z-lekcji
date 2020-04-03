#include<iostream>
#include<cmath>
using namespace std;


main(){
    int m,a=0,b=1,c;
    cin>> m;
    cout<<"miesiac 0 - 0 par kroliczkow"<<endl;
    if(m>0)
    cout<<"miesiac 1 - 1 para kroliczkow"<<endl;
    for(int i=2;i<=m;i++){
            c=a+b;
        cout<<"miesiac "<< i<< " - "<<c<< " pary kroliczkow"<<endl;
        a=b;
        b=c;
    }
    return 0;
}

