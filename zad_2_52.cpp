#include <iostream>

using namespace std;

int oblicz(int T[],int n, int lewy, int prawy, int &minimum, int &maksimum){
    if(lewy==prawy){
        maksimum=T[lewy];
        minimum=T[lewy];
        return 0;
    }
    else{

        if(lewy==prawy-1){
            cout<<"l = "<<lewy<<" "<<"p = "<<prawy<<endl;
            if(T[lewy]<T[prawy]){
                //! problem z pobieraniem dlaszych liczb czy to z pierwotnej tablicy czy tej zwyklej
                cout<<T[0]<<" to jest t[1] "<<T[1]<<endl;
                maksimum=T[prawy];
                minimum=T[lewy];
                cout<<"To jest max "<<maksimum<<endl;
                cout<<"To jest min "<<minimum<<endl;
                return 0;
            }
            else{
                maksimum=T[lewy];
                minimum=T[prawy];
                cout<<"To jest max "<<maksimum<<endl;
                cout<<"To jest min "<<minimum<<endl;
                return 0;
            }
        }
        int dl;
        if(n%2)
           dl=n/2+1;
        else
            dl=n/2;
        int T1[dl];
        int T2[dl];
        int temp=n/2;
        for(int i=0; i<dl; i++){
            if(i!=dl-1 && n%2!=0){
                T1[i]=T[i];
                T2[i]=T[temp];
                temp++;
            }
            else{
                T1[i]=T[i];
                T2[i]=T[i];
            }
        }
        int minimum1;
        int maksimum1;
        int minimum2;
        int maksimum2;

        int lewy2=lewy;
        int prawy2 = prawy;
        oblicz(T1,dl, lewy, (lewy+prawy)/2, minimum1, maksimum1);
        //! Nie wchodzi do drugiej petli
        oblicz(T2,dl, (lewy2+prawy2)/2+1, prawy2, minimum2,maksimum2);
        if(minimum1<minimum2)
            minimum=minimum1;
        else
            minimum=minimum2;
        if(maksimum1>maksimum2)
            maksimum=maksimum1;
        else
            maksimum=maksimum2;
    }
}

int main(){
    cout<<"Podaj ilosc elementow tablicy"<<endl;
   int n;
   cin>>n;
   cout<<"Podaj wartosci kolejnych elementow"<<endl;
   int *T=new int[n];
   for(int i=0; i<n; i++){
    cin>>T[i];
   }
   //cout<<T[0]<<endl;
   int maximum;
   int minimum;
   oblicz(T,n,0, n-1,minimum, maximum);
   cout<<"To jest max "<<maximum<<endl;
   cout<<"To jest min "<<minimum<<endl;
    delete[]T;
    return 0;
}

