#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
    cout << "*wpisz dowolne dwie liczby " ;
    cin >> a>>b;
    if (a>b)
        cout << "liczba pierwsza jest wieksza od drugiej " << endl;
    else
        if(a==b)
            {cout << "liczba pierwsza jest rowna drugiej"<< endl;
             cout << a*b << endl;
             cout << (a+1)*b << endl;
            }
        else
            cout << "liczba druga jest wieksza od pierwszej" << endl;


    return 0;
}
