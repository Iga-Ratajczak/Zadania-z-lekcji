#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

void wprowadz(int &n, int &a, int &b){
    cout<<"wprowadz 3 liczby naturalne wieksze od 0"<<endl;
    cin>>n>>a>>b;
}
bool dodatnia(int a, int b){
    if(2*a-b>0) return true;
    else return false;
}
double suma(int n){
    double s=-5;
    int j=3;
    for (int i=1; i<n; i++){
        s+=(double)-5/j;
        j*=3;
    }
    return s;
}
double ciag(int n){
    double s=0.3;
    int j=3;
    for (int i=1; i<n; i++){
        s=(double)s*-2;
        cout<<s<<endl;
    }
    return s;
}


int main()
{   int n,a,b;
    wprowadz(n,a,b);
    double sum=suma(n);
    double wyraz=ciag(n);
    if(dodatnia(a,b))
        cout<<"Wartosc wyrazenia wieksza od zera"<<endl;
    else
        cout<<"Wartosc wyrazenia mniejsza od zera"<<endl;

    cout<<"Suma wynosi "<<sum<<endl<<n<<"-ty wyraz ciagu "<<wyraz<<endl;
    return 0;
}
