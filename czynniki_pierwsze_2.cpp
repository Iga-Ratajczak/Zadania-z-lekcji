#include<iostream>
#include<cmath>

using namespace std;

void czynniki(int n){
   int d=2;
   while(n>1){
        if(n%d==0){
            n=n/d;
            cout<<d<<endl;
        }
        else
            d++;
   }

}
int main(){
czynniki(58);
    return 0;
}

