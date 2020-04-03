#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //pobieranie 10 i suma
    ifstream plik;
    plik.open("liczby.txt");

    int x;
    int suma=0;

    for (int i=0; i<10; i++)
       {
          plik >> x;
          suma += x;
          cout << x << " ";
       }
    cout << "Suma 10 liczb w pliku jest rowna " << suma << endl;
    plik.close();

    //wszystkie i suma
    x=0;
    suma=0;
    plik.open("liczby.txt");

    while (!plik.eof())
       {
          plik >> x;
          suma += x;
          cout << x << " ";
       }
    cout << "Suma wszystkich liczb w pliku jest rowna " << suma << endl;

    plik.close();
    return 0;
}
