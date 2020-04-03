#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){

int x[3][4];
srand(time(0));
for(int w=0;w<3;w++){
    for (int k=0;k<4;k++){
        x[w][k]=rand()%28-8;
        cout<<x[w][k]<<"\t";
    }
    cout<<endl;
}
int il=1;
for(int w=0;w<3;w++){
    for (int k=0;k<4;k++){
            if(x[w][k]%7!=0)
                il*=x[w][k];
    }
}
cout<<"iloczyn liczb niepodzielnych przez 7: "<<il<<endl;
int l=0;
for(int w=0;w<3;w++){
    for (int k=0;k<4;k++){
            if(w*k>0)
                l++;
    }
}
cout<<"\nliczba skladnikow tablicy ktorych iloczyn indeksow jest liczba doatnia "<<l<<endl;
int p=0;
for(int w=0;w<3;w++){
    for (int k=0;k<4;k++){
            if(x[w][k]>4)
                p++;
    }
}
if(p>0)
cout<<"\nistnieje element wiekszy od 4";
return 0;
}
