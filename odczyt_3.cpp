#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream we("dane.txt");
    int x,suma=0;
    for (int i=0;i<10;i++)
       {
          we>>x;
          suma+=x;
       }
    cout<<"Suma liczb w pliku jest rowna "<<suma<<endl;

    we.close();
    return 0;
}
