#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int k = -5,i=1;

    do{
        cout<<k<<endl;
        cout<<i<<endl;
        k*=2;
        i+=2;
    }
    while(i<=10);
    cout<<k+1<<endl<<endl;

    k=3;
    for(i=0; i<4; i++){
        cout<<k<<endl;
        k*=-3;
        cout<<i<<endl;
    }
    cout<<2*k<<endl<<endl;

    i=11;
    k=10;
    cout<<i<<endl;
    k-=4;
    cout<<k<<endl;
    i-=3;

    for(i;i>=3;i-=3){
        cout<<i<<endl;
        k-=4;
        cout<<k<<endl;
    }
    cout<<k-2<<endl;
    return 0;
}
