#include <iostream>
#include <fstream>
using namespace std;


int nwd(int a,int b)
{
    while (a!=b)
        if (a>b) a-=b;
        else b-=a;
    return a;
}

int main()
{
    ofstream wy("nwd.txt",ios::app);
    cout<<"Wpisz dwie liczby naturalne: ";
    int x,y;
    cin>>x;
    cin>>y;
    wy<<"NWD("<<x<<","<<y<<")="<<nwd(x,y)<<endl;
    wy.close();
    return 0;
}
