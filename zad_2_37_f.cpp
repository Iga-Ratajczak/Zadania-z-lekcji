#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
bool niepodzielna(int x[]){
srand(time(0));
int l=0;
cout<<"wylosowane liczby to: "<<endl;
for(int i=0;i<11;i++){
    x[i]=rand()%33;
    if(x[i]%4==0)
        l++;
    cout<<x[i]<<endl;
    }
    if(l==0)
        return true;
    else
        return false;
}
int main(){
int x[11];
cout<<"jezeli podaje 1 - wszystkie liczby sa niepodzielne przez 3. Wynik =  "<<niepodzielna (x);
return 0;
}
