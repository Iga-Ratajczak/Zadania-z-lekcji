#include <iostream>
#include <cmath>

using namespace std;

int main()
{   int n;
    double x;
    cin>>n>>x;
    switch(n){
    case 1: cout<<sqrt(2*x); break;
    case 2: cout<<pow(x,3)-5; break;
    case 3: cout<<cos(x)+1; break;
    default: cout<<1;
    }
    return 0;
}
