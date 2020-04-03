#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x,y;
    cout << "wpisz dowolna liczbe " ;
    cin >>x;
    if (x<1)
        y=2*x;
    else if (x==1)
       y=-10;
    else if (x==3)
       y=pow(x-1,4);
    else if (x==6)
        y=sqrt(x-4);
        else
        y=0;
        cout << "y jest rowne " << y;
    return 0;
}
