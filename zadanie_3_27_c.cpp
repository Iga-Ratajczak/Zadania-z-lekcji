#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){

int x[5][5];
srand(time(0));
for(int w=0;w<5;w++){
    for (int k=0;k<5;k++){
        x[w][k]=rand()%108-20;
        cout<<x[w][k]<<"\t";
    }
    cout<<endl;
}
cout<<"now tabela"<<endl;
int p;
for(int i=0;i<5;i++){
            p=x[2][i];
            x[2][i]=x[i][2];
            x[i][2]=p;
}
for(int w=0;w<5;w++){
    for (int k=0;k<5;k++){
    cout<<x[w][k]<<"\t";
}
cout<<endl;
}
return 0;
}
