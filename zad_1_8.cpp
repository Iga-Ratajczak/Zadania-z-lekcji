#include <iostream>
using namespace std;
int main()
{


    double a,b,c,d;
    cin >> a,b,c,d;

    if(a<b)
    {
        if (a<c)
           if (a<d)
           cout << a << " jest najmniejsza liczba"<< endl;
    }
    else if(b<c)
    {
        if (b<d)

           cout << b << " jest najmniejsza liczba"<< endl;
    }
    else if(c<d)
        cout << c << " jest najmniejsza liczba"<< endl;
       else
        cout << d<< " jest najmniejsza liczba" << endl;
    return(0);

}
