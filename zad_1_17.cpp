#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   double x,y;
    srand (time(0));
    x=(double)rand()/RAND_MAX*15-5 ;
    cout << "x =" << x << endl;
    if (x<7)
        y=pow(x,3) +1;
    else if (x==7)
        y=cos(x-1);
    else if (x==9)
        y=sqrt(3*x);
    else
        y=-8*x;
    cout << "f(x) jest rowne " << y << endl;



    return 0;
}
