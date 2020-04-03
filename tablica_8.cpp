#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
void losuj(int x[],int a){
srand(time(0));
for(int i=0; i<a;i++){
    x[i]=rand()%50+1;
    cout<<x[i]<<endl;
}
}
bool szukana(int x[], int a, int s){
    for(int i=0;i<a;i++)
        if (s==x[i])
            return true;
    return false;

}


int main(){
int a;
int s;
int x[100];
cin>>a;

losuj(x,a);
cin >>s;
if( szukana(x,a,s)==true)
    cout<<"znaleziono";
else
    cout<<"nie ma";


 return 0;
}
