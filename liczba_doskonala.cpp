#include<iostream>
#include<cmath>
using namespace std;

void dzielnik(int c){
if (c==0)
    cout<<"jest nieskonczenie wiele dzielnikow dla 0";

for(int a=1;a<=c;a++)
    if(c%a==0)
    cout<< a<<endl;

}

int suma(int c)
{int s=0;
for(int a=1;a<=c;a++)
    if(c%a==0)
        s=s+a;
return s;
}

bool doskonala(int c)
{
    if (suma(c)-c==c)
        return true;
    return false;
}
main(){
        for(int i=1;i<1000000000;i++)
            if(doskonala(i))
            cout<<i<<endl;

    return 0;
}

