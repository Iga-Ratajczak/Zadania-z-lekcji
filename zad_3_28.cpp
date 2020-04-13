#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){

int x[4][5]={0,8,5,6,4, 1,8,2,4,4, 2,4,6,5,7, 3,6,7,2,3, };
cout<<"podaj nr wiersza ktorego warotsci chcesz usunac"<<endl;
int m;
cin>>m;
for(int w=m;w<4;w++){
    for (int k=0;k<5;k++){
            x[w][k]=x[w+1][k];

    }
}
for (int k=0;k<5;k++){
    x[3][k]=0;
}
for(int w=0;w<4;w++){
    for (int k=0;k<5;k++){

        cout<<x[w][k]<<"\t";
    }
    cout<<endl;
}

return 0;
}
