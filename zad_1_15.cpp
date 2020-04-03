#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y,z;
    cout << "wpisz dowolne trzy liczby " ;
    cin >> x>>y>>z;
    if (!(x%2==0)||!(y%2==0)||!(z%2==0))
        cout << "tak" << endl;
    else
        cout << "nie" << endl;


    return 0;
}
