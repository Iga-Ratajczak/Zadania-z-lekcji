#include <iostream>
#include <cmath>

using namespace std;

int main()
{   int a,b;
    double wynik;
    cin>>a>>b;



    wynik = sqrt(7/(pow(a,3)+ cos(b)));
    cout<<wynik<<endl;
    wynik = sin(pow(a+b,4)/(sqrt(11)+1));
    cout<<wynik<<endl;
    wynik = pow((cos(a+1)/(sqrt(5)+3)),3);
    cout<<wynik;
    return 0;
}
