#include <iostream>

using namespace std;

int main()
{

    double a,b;
    cin >> a >> b;
    double P;
    P=a*b;

    cout << "pole \"P\" \n jest rowne ." << P << endl;

    if (P>100)
        cout << "duzy prostokat"<< endl;

    if (P>=10)
        if (P<=20)
        cout << "tyci\n";


    return 0;
    }
