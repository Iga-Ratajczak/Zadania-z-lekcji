#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   double wynik;
    srand(time(0));
    wynik=(double)rand()/RAND_MAX*(64.5);
    for(int i=0; i<5; i++)
        cout<<RAND_MAX<<" "<<wynik<<endl;

    return 0;
}
