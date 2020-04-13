#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<vector>

using namespace std;

//sortowanie babelkowe
void b_sort(int tab[], int size)
{
    for(int i=1; i<size; i++){
        for(int j=0; j<size-1; j++){
            if (tab[j]<tab[j+1]){
                int p = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = p;
            }
        }
    }
}

int main(){

    srand(time(0));
    int const WIERSZ = 5;
    int const KOLUMNA = 5;

    int x[WIERSZ][KOLUMNA];

    //tworzenie nowej macierzy
    cout<<"nowa macierz"<<endl;

    for(int i=0; i<WIERSZ; i++){
        for(int j =0; j<KOLUMNA; j++){
                x[i][j] = rand()%109-20;
                cout<<x[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;

    //sortowanie macierzy

    for(int i=0; i<WIERSZ; i++){
        int pom[WIERSZ];
        for(int j=0; j<KOLUMNA; j++){
            pom[j] = x[j][i];
        }
        b_sort(pom, WIERSZ);
        for(int j=0; j<KOLUMNA; j++){
            x[j][i] = pom[j];
        }
    }
    //wypisywanie posortowanej macierzy
    cout<<"posortowana macierz"<<endl;

    for(int i=0; i<WIERSZ; i++){
        for(int j=0; j<KOLUMNA; j++){
            cout<<x[i][j]<<"\t";
        }
        cout<<endl;
    }


    return 0;
}
