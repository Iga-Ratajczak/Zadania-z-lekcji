#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"Podaj wymiary tablicy"<<endl;
    int m,n;
    cin>>m>>n;
    double x[m][n];
    srand(time(0));
    for(int w=0;w<m;w++){
        for (int k=0;k<n;k++){
            x[w][k]=-8.55+(double)rand()/RAND_MAX*(26+8.55);
            cout<<x[w][k]<<"\t";
            }
            cout<<endl;
    }
    int s=0;
    for(int w=0;w<m;w++){
        for (int k=0;k<n;k++){
                if(w%2!=0)
                    s+=x[w][k];
        }
    }
    cout<<"suma elementow tablicy ktorych numer wiersza jest liczba nieparzysta: "<<s<<endl<<"nowa tablica"<<endl;

    for(int w=0;w<m;w++){
        for (int k=0;k<n;k++){
                if(x[w][k]<0)
                    x[w][k]-=2;
                    cout<<x[w][k]<<"\t";
            }
            cout<<endl;
    }

    int p=0;
    for(int w=0;w<m;w++){
        for (int k=0;k<n;k++){
                if(x[w][k]>10)
                    p++;
        }
    }
    if(p>0)
        cout<<"\nnie wszystkie elementy tablicy sa mniejsze od 10";
    else
        cout<<"\nwszystkie elementy tablicy sa mniejsze od 10";
    return 0;
    }
