#include<iostream>
using namespace std;
int main (){

        int i=1,n;
        double a=1;
        cin >>n;
        do
            {a=a*(double(i+3)/n);
            i++;}
            while (i<=n);
            cout<< a;
        return 0;

}
