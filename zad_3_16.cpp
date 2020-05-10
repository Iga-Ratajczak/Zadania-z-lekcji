#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
int silnia(int n){
    int il = n;
    for(int i=1; i<n; i++){
        il*=i;
    }
    return il;
}
void mianownik(int &n){
    int s=n;
    for (int i=1; i<n; i++){
        s+=i;
    }
    n=s;
}

int main()
{   int x, y;
    cout<<"Podaj wartosc y bedacej liczba naturalna wieksza od 0"<<endl;
    cin>>y;
    srand(time(0));
    x=5+rand()%(10-5);
    cout<<x<<endl;
    x=silnia(x);
    int b=silnia(y);
    mianownik(y);
    double w=(double)(x+b)/y;

    cout<<x<<" "<<b<<" "<<y<<endl<<"wynik "<<w;
    return 0;
}
