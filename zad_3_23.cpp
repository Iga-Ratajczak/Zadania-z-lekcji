#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
void czytaj(int x[]){
srand(time(0));
int l=0;
for(int i=0;i<15;i++){
    x[i]=rand()%11;
    cout<<x[i]<<endl;
}
}

void licz(int x[]){
    int l=0;
    for(int i=0;i<15;i++){
        for(int j=i+1;j<14;j++){
        if(x[i]==x[j])
            l++;
    }
    cout <<"licznik "<<l<<endl;
}
}
int main(){
int x[15];
czytaj(x);
licz (x);

 return 0;
}
