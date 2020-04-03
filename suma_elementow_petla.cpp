#include <iostream>

using namespace std;

int main()
{   int x,i,a,s;
    cin>> x;
    i=1;
    s=0;
    while (i<=x)
    {
        cin >> a;
        cout<< 2*a<< endl;
        s=s+a;
        i++;

    }
    cout << "suma = "<< s;
    return 0;
}
