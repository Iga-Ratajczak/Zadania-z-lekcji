#include <iostream>

using namespace std;

int main()

{
    int i,a,n,s;
    cin>> n;
    i=-10;
    a=1;
    s=i;
    while (a<n){
            i=i+6;
            s=s+i;
            a++;
            }
cout<< "suma to "<< s;
    return 0;
}
