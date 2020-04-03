#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()

{   srand(time(0));
    int i,n,a,s;
    cin>>n;
    i=1;
    s=1;

    while (i<=n)

      {a=rand()%4+2;
      s=s*a;
      cout<<a<< endl;
    i++;}

    cout<< "iloczyn to "<< s;
    return 0;
}
