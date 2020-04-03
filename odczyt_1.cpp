#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream wy("dzielniki.txt");

    cout<<"Wpisz liczbe naturalna: ";
    int x;
    cin>>x;
    for (int i=1;i<=x;i++)
        if (x%i==0) wy<<i<<" ";

    wy.close();
    return 0;
}
