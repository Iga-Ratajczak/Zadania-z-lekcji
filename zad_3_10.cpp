#include <iostream>
#include <ctime>

using namespace std;

int main()
{   int n;
    cout<<"1\t Dane ucznia\n2\t Aktualna data\n3\t Samodzielnie wybrany algorytm\n4\t Zakonczenie programu"<<endl;
    cout<<"Podaj numer"<<endl;
    cin>>n;
    time_t now=time(0);
    char *dt = ctime(&now);

    switch(n){
    case 1 : cout<<"Iga"<<endl<<"1\t Dane ucznia\n2\t Aktualna data\n3\t Samodzielnie wybrany algorytm\n4\t Zakonczenie programu"<<endl; break;
    case 2 : cout<<dt<<endl<<"1\t Dane ucznia\n2\t Aktualna data\n3\t Samodzielnie wybrany algorytm\n4\t Zakonczenie programu"<<endl; break;
    case 3 : cout<<"3+2 = "<<"5"<<endl<<"1\t Dane ucznia\n2\t Aktualna data\n3\t Samodzielnie wybrany algorytm\n4\t Zakonczenie programu"<<endl; break;
    case 4 : break;
    }
    double a,b;
    int c;
    char d;

    a=a--;
    c=5;
    d='z';
    a=b*3.5;
    d='p';
    c=-5;
    cout<<a<<" "<<b<<" "<<d<<" "<<c;
    return 0;
}
