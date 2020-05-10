#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//typ void i wskaznik
void jednowymiarowa (int *t, int n){
    srand(time(0));
    for(int i=0;i<n;i++){
        t[i]=rand()%(15)+5;
        cout<<t[i]<<"\t";
    }
    cout<<endl;
}

void jednowymiarowa (double *t, int n){
    double temp;
    for(int i=0;i<n;i++){
        cout<<"wpisz wartosc komorki tablicy"<<endl;
        cin>>temp;
        t[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<t[i]<<"\t";
    }
    cout<<endl;
}

bool sprawdz (int *t, int n){
    cout<<"wprowadz wartosc ktora program ma sprawdzic czy istnieje w tablicy"<<endl;
    int temp;
    cin>>temp;
    for(int i=0;i<n;i++){
        if(t[i]==temp)
            return true;
    }
    return false;
}

bool sprawdz (double *t, int n){
    cout<<"wprowadz wartosc ktora program ma sprawdzic czy istnieje w tablicy"<<endl;
    double temp;
    cin>>temp;
    for(int i=0;i<n;i++){
        if(t[i]==temp)
            return true;
    }
    return false;
}

void suma(int *t, int n=3, int mnoznik=2){
    int s=0;
    for(int i=0;i<n;i++){
        s+=t[i];
    }

    if(n==6)
        s*=mnoznik;
    cout<<"suma wynosi " <<s<<endl;
}

void iloczyn (double *t, int n=4, double temp=0){
    double il =1;
    double wartosc;
    if(n==4){
        cout<<"Podaj wartosc od ktorej rozne elementy tablicy maja zostac pomnozone przez siebie"<<endl;
        cin>>wartosc;
        temp=wartosc;
    }

    for(int i=0;i<n;i++){
        if(t[i]!=temp)
        il*=t[i];
    }
    cout<<"Iloczyn wynosi " <<il<<endl;
}

int main(){
    int x[6];
    jednowymiarowa(x, 6);

    if (sprawdz(x,6))
        cout<<"Dana wartosc zawarta jes w tablicy"<<endl;
    else
        cout<<"nie ma zawartej wartosci w tablicy"<<endl;

    suma(x,6);
    suma (x);

    double y[6];

    jednowymiarowa (y, 6);

    if(sprawdz(y,6))
        cout<<"Dana wartosc zawarta jes w tablicy"<<endl;
    else
        cout<<"nie ma zawartej wartosci w tablicy"<<endl;

    iloczyn(y,6);
    iloczyn(y);

    return 0;
}
