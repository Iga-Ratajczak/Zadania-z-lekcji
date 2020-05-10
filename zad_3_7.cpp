#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   int a=3,b=-2,c=10;
    if (a+b<c){
        a*=2;
        b-=1;
        if(c>0)
            c+=a;
        else
            c+=b;
    }
    else
        c+=a*b;
    cout<<a<<" "<<b<<" "<<c<<endl;

    int x=5, y=1, z=6;
    x+=y;
    if(x>y+1){
        x+=z;
        z--;
    }
    if(z<3)
        z*=x;
    else{
        z*=y;
        z++;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;

    int m=5,n=4,k=0;
    if(m+n<k)
        cout<<k;
    else{
        k=m+n;
        if(m+1<n){
            n*=4;
            k--;
        }
        else
            m*=2;
    }
    cout<<m<<"\t"<<k<<"\t"<<n;
    return 0;
}
