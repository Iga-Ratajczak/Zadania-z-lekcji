#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<vector>

using namespace std;

//sortowanie b¹belkowe
void b_sort(int tablica[25])
{
    int temp, i, zmiana;
    do{
        zmiana = 0;
        i = 24;
        do{
            i--;
            if (tablica[i+1] > tablica[i]){
                temp = tablica[i];
                tablica[i] = tablica[i+1];
                tablica[i+1] = temp;
                zmiana = 1;
            }
        }while (i != 0);
    }while (zmiana != 0);
}

int main(){

    srand(time(0));

    //generowanie randomowej macierzy
    cout<<"nowa macierz: "<<endl;

    const int WEKTOR = 5;
    const int KOLUMNA = 5;

    int x[WEKTOR][KOLUMNA];
    int pom[WEKTOR*KOLUMNA];

    int i = 0;

    for(int w=0; w<5; w++){
        for(int k=0; k<5; k++){
            //wstawianie elementów do macierzy
            x[w][k] = rand()%108-20;
            //wstawianie do tabeli
            pom[i] = x[w][k];
            i++;
            cout<<x[w][k]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"wyœwieltanie tabeli"<<endl;
    for(int i=0; i<25; i++){
        cout << pom[i] << " ";
    }
    cout << endl << endl;

    //sortowanie
    b_sort(pom);

    cout<<"wyœwieltanie posortowanej tabeli"<<endl;
    for(int i=0; i<25; i++){
        cout << pom[i] << " ";
    }
    cout << endl << endl;

    //iterator
    cout <<endl<< "Posortowano macierz wedlug wierszy: " << endl;
    i = 0;
    for(int k=0; k<5; k++){
        for(int w=0; w<5; w++){
            //wstawianie elementów do macierzy z tabeli 1 wym,
            x[w][k] = pom[i];
            //zwiêkszanie iteratora
            i++;
            cout << x[w][k] << "\t";
        }
        cout<<endl;
    }

    cout <<endl<< "Posortowano macierz wedlug kolumn: " << endl;

    //wyœwietlanko tabeli
    for(int w=0; w<5; w++){
        for(int k=0; k<5; k++){
            cout << x[w][k] << "\t";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
