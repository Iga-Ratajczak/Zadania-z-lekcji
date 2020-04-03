#include <iostream>
#include <cmath>
using namespace std;
int main()
{


    double a,b,c,p,P,z;
    cin >> a>>b>>c;
    p=(a+b+c)/2;
    z=p*(p-a)*(p-b)*(p-c);
    P=sqrt(z);

    if (z<=0)
        cout << "z podanych dlugosci bokow nie mozna zbudowac trojkata"<< endl;
    else

        cout << "pole trojkata wynosi " << P << endl;


    return(0);

}
