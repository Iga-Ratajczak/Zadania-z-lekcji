#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x,y;
    cout << "wpisz dwie liczby " ;
    cin >> x,y;
    double w;
    w=sqrt(3*sqrt(x)/(20+pow(y,2)));
    cout << "wynik obliczen to " << w << endl;
    return 0;
}
