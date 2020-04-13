#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){

int x[4][3];
x[0][0]=1;
x[0][1]=3;
x[0][2]=5;
x[1][0]=6;
x[1][1]=8;
x[1][2]=10;
x[2][0]=11;
x[2][1]=13;
x[2][2]=15;
x[3][0]=16;
x[3][1]=18;
x[3][2]=20;

for(int w=0;w<4;w++){
    for (int k=0;k<3;k++){
        cout<<x[w][k]<<"\t";
    }
    cout<<endl;
}


return 0;
}
