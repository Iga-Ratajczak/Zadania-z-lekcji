#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d;
    cout << "wpisz dowolne cztery liczby " ;
    cin >> a>>b>>c>>d;
    if (a>=5 || b>=5 || c>=5 || d>=5)
        cout << "nie" << endl;
    else
        cout << "tak" << endl;


    return 0;
}
