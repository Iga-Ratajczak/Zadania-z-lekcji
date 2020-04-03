#include<iostream>
#include<cmath>

using namespace std;

int czynniki(int n){
   int d=2;
   while(n>1)
   if(n%d==0){
    n=n/d;
    cout<<d<<endl;
   }
   else
        d++;
        return 0;

}
int main(){
czynniki(28);
    return 0;
}

