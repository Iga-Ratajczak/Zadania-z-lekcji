#include <iostream>
#include<fstream>
using namespace std;




int main(){
    ofstream nazwisko("nazwisko.txt");

    ofstream wiek("wiek.txt");
    ofstream miejsce("miejsce.txt");
    ofstream telefon("telefon");
    cout<<"Podaj ilosc studentow ktorych dane chcesz zapisac do pliku"<<endl;
    int n;
    cin>>n;
    int i=0;
    while (i!=n+1){
        string temp;
        cout<<"Podaj nazwisko i imie"<<endl;
        getline(cin, temp);
        nazwisko<<temp<<endl;
        int w;
        cout<<"Podaj wiek"<<endl;
        cin>>w;
        wiek<<w<<endl;
        cout<<"Podaj miejsce urodzenia"<<endl;
        cin>>temp;
        miejsce<<temp<<endl;
        cout<<"Podaj numer telefonu"<<endl;
        cin>>temp;
        telefon<<temp<<endl;
        i++;
    }

    nazwisko.close();
    wiek.close();
    miejsce.close();
    telefon.close();

    return 0;
}
