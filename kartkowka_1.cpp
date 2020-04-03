#include <iostream>
#include <cmath>
using namespace std;
int main () {
        double x,w;
        cin>> x;
        if (((x+5)>=0)&&(x*x*x-1)!=0){
            w=sqrt(x+5)/(x*x*x-1);
            cout <<"W rowna sie "<< w;
        }
            else
                cout<< "nie licze";


        return 0;
}
