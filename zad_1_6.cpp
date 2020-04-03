#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cout << "wpisz dowolna liczbe " ;
    cin >> a;
    if (a%2==0)
        cout << "liczba jest parzysta" << endl;
    else
        cout << "liczba nie jest parzysta" << endl;
    return 0;
}
