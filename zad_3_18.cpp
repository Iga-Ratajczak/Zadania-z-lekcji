#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

//typ void i wskaznik
void jednowymiarowa (int *t, int n){
    for(int i=0;i<n;i++){
        t[i]=i;
    }
}

void jednowymiarowa (double *t, int n){
    double temp;
    for(int i=0;i<n;i++){
        cout<<"wpisz wartosc komorki tablicy"<<endl;
        cin>>temp;
        t[i]=temp;
    }
}

void dwuwymiarowa(int b[3][4] ){
    int i=3,j=4;
    for(int k=0; k<i;  k++){
        for(int l=0; l<j; l++){
            b[k][l]=k*l;
            //cout<<b[k][l]<<"\t";
        }
        //cout<<endl;
    }
}

int i, int j, double (*t[][j]
void dwuwymiarowa(void){
    cout<<"Wprowadz ilosc wierszy i kolumn tablicy dwuwymiarowej, liczby te musza nalezec do zbioru liczb naturalnych dodatnich"<<endl;
    int m,n;
    cin>>m>>n;
    double t[m][n];
    for(int k=0; k<m;  k++){
        for(int l=0; l<n; l++){
            cout<<"wpisz wartosc komorki tablicy"<<endl;
            double temp;
            cin>>temp;
            t[k][l]=temp;
            //cout<<t[k][l]<<"\t";
        }
        //cout<<endl;
    }
}

int main()
{   int k, m, n;
    cout<<"Wprowadz ilosc elementow tablicy jednowymiarowej, liczba musi nalezec do zbioru liczb naturalnych dodatnich"<<endl;
    cin>>k;
    int x[6];
    jednowymiarowa(x, 6);

    double y[k];
    jednowymiarowa (y, k);
    int b[3][4];
    dwuwymiarowa(b);
    cout<<b[2][3]<<endl;
    dwuwymiarowa();
    //cout<<"Wprowadz ilosc wierszy i kolumn tablicy dwuwymiarowej, liczby te musza nalezec do zbioru liczb naturalnych dodatnich"<<endl;
   // cin>>m>>n;
    //double t[m][n];
   // dwuwymiarowa(m, n, t)
    system("pause");

    return 0;
}
