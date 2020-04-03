#include<iostream>
#include<cmath>

using namespace std;

int suma(int n){
    int i=10,r,s=0;
    for(;n>=10;n=n/i){
        r=n%10;
        s=s+r;
    }
    s+=n;

    return s;
}

int czynniki(int n){
   int d=2,s=0,r,i=10;
   while(n>1){
        if(n%d==0){
            n/=d;
    for(;d>=10;d=d/i){
        r=d%10;
        s=s+r;
    }
    s+=d;
        }
        else
            d++;
   }
    return s;
}

string liczbaSmitha(int n){
    int s=0;
    for(int a=1;a<=n;a++)
        if(n%a==0)
            s++;

    if (s==2||n<2)
      return "nie liczba smitha";
        else if(czynniki(n) == suma(n))
            return "liczba smitha";
        else
            return "nie liczba smitha";
}


int main(){

    cout << "202 " << liczbaSmitha(202) << endl;
    cout << "22 " << liczbaSmitha(22) << endl;
    cout << "58 " << liczbaSmitha(58) << endl;
    cout << "19 " << liczbaSmitha(19) << endl;
    cout << "7643 " << liczbaSmitha(7643) << endl;
    return 0;
}
