#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
int m;
cout<<"Podaj liczbe n, dla ktorej zostana wygenerowne wszystkie liczby z przedzialu [2,n] "<<endl;
cin>>m;
int n=m+1;
//int x[n];
// taki zapis dziala w obecnych kompilatorach, w starszych powodowal bledy
// zasadniczo nie jest on zalecany i jezli chce sie ustalic rozmiar
// tablicy w trakcie dzialania programu
// to mozna zadeklarowac tablice statyczna na zapas, tak:
// int x[1000];
// lub zadeklarowac dynamiczna tak:
int *x = new int [n];
// *x - wskaznik miejsca w pamieci
// &x - adres
// new int [n] - co jest tam przechowywane?

for(int i=2;i<n;i++){
        x[i]=1;
}
//int p=0;
//to bylo zbedne, wartosc p ustalasz poznej, wystarczy:
int p;

for(int i=2;i<n;i++){
        p=i;
    for(p+=i;p<n;p+=i){
    x[p]=0;
    }
}

for(int i=2;i<n;i++){
cout<<"Liczba "<< i;
if(x[i]==0)
   cout<<" nie jest liczba pierwsza ";
else
    cout<<" jest liczba pierwsza";
cout<<endl;
}
// zwolnienie pamieci, gdy wykorzystywana byla tablica dynamiczna:

delete [] x;
return 0;
}
