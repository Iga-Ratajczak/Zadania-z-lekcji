#include<iostream>
#include<cmath>
using namespace std;



int ile(int c)
{int s=0;
for(int a=1;a<=c;a++)
    if(c%a==0)
        s++;
return s;
}

bool pierwsza(int c)
{   if(c<2)
    return false;
    if (ile(c)==2)
        return true;
    return false;
}
main(){
        for(int i=1;i<10000000;i++)
            if(pierwsza(i))
            cout<<i<<endl;

    return 0;
}

