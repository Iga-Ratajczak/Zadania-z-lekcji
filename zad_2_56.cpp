#include <iostream>
#define MAX 50
using namespace std;

void sortuj(double *T, int lewy, int prawy){
    int i=lewy, j=prawy;
    double srodek=T[(lewy+prawy)/2], pom;
    do{
        while(T[i]>srodek)
            i++;
        while(T[j]<srodek)
            j--;
        if (i<=j){
            pom=T[i];
            T[i]=T[j];
            T[j]=pom;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(lewy<j)
        sortuj(T, lewy, j);
    if(prawy>i)
        sortuj(T, i, prawy);
}

int main(){
    cout<<"Podaj ilosc elementow tablicy"<<endl;
   int n;
   cin>>n;
   cout<<"Podaj wartosci kolejnych elementow"<<endl;
   double *T=new double[n];
   for(int i=0; i<n; i++){
    cin>>T[i];
   }
   sortuj(T, 0, n-1);

   cout<<"posortowano tablice"<<endl;
   for(int i=0; i<n; i++){
    cout<<T[i]<<" ";
   }

    delete[]T;
    return 0;
}

