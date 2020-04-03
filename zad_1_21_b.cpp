#include<iostream>
#include<cmath>
using namespace std;


main(){
    int i=1, n;
    double s=0.0;
    cin >>n;
    while (i<=n){
        s=s+(double)1/(2*i);
        i++;
    }
    cout<<s;
        return 0;

}

