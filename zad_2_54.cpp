#include <iostream>
#define MAX 50
using namespace std;

void scalaj(double *T, int lewy, int prawy){
    int i, i_lewy, i_prawy, srodek;
    double pom[MAX];
    for(i=0; i<MAX; i++)
        pom[i]=T[i];
    srodek =(lewy+prawy)/2;
    i=lewy;
    i_lewy=lewy;
    i_prawy=srodek+1;
    while(i_lewy<=srodek &&i_prawy<=prawy){
        if(pom[i_lewy]>pom[i_prawy]){
            T[i]=pom[i_lewy];
            i_lewy++;
        }
        else{
            T[i]=pom[i_prawy];
            i_prawy++;
        }
        i++;
    }
    if(i_lewy>srodek){
        while(i_prawy<=prawy){
            T[i]=pom[i_prawy];
            i_prawy++;
            i++;
        }
    }
    //tu niepewna
    else{
        while(i_lewy<=srodek){
            T[i]=pom[i_lewy];
            i_lewy++;
            i++;
        }
    }
}

void sortuj (double *T, int lewy, int prawy){
    int srodek=(lewy+prawy)/2;
    if(lewy<srodek)
        sortuj(T, lewy, srodek);
    if(srodek+1<prawy)
        sortuj(T, srodek+1, prawy);
    scalaj(T, lewy, prawy);
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

