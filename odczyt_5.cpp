#include <iostream>
#include <fstream>
using namespace std;

void sortuj(int t[],int n)
{
    for (int j=n-1;j>0;j--)
        for (int i=0;i<j;i++)
            if (t[i]>t[i+1]){
                int pom=t[i];
                t[i]=t[i+1];
                t[i+1]=pom;}
}

int main()
{
    ifstream we("dane.txt");
    ofstream wy("wynik.txt");
    int t[100];
    int n=0;
    while (!we.eof()){
          we>>t[n];
          n++;
    }

    sortuj(t,n);

    for (int i=0;i<n;i++)
        wy<<t[i]<<" ";
    we.close();
    wy.close();
    return 0;
}
