#include <iostream>
#include<fstream>
using namespace std;




int main(){
    ofstream plik;
    plik.open("zadanie.txt");
    for(int i=1; i<17; i++){
        plik<<i<<endl;
    }
    plik.close();
    int licznik=0;
    int suma=0;
    ifstream wyniki;
    wyniki.open("zadanie.txt");
    ofstream plik2;
    plik2.open("niepodzielne.txt");
    for(int i=1; i<17; i++){
        int temp;
        wyniki>>temp;
        if(temp<15)
            cout<<temp<<endl;
        if(temp<11){
          suma+=temp;
          licznik++;
        }
        if(temp%3!=0)
            plik2<<temp<<endl;
    }
    cout<<"srednia arytmetyczna liczb mniejszych od 11 = " <<(double)suma/licznik<<endl;
    wyniki.close();
    plik2.close();

    licznik =0;
    ifstream wyniki2;
    wyniki2.open("niepodzielne.txt");
    while(!wyniki2.eof()){
        int temp;
        wyniki2>>temp;
        licznik++;
        cout<<temp<<" "<<licznik<<endl;
    }
    wyniki2.close();

    return 0;
}
