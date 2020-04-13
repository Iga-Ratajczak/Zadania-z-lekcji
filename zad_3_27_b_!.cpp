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
int l=x[0][0];
int i;
for(int w=0;w<5;w++){
    l=x[w][0];
    i = 1;
    for (int k=1;k<5;k++){   // k=0 nie powoduje blêdu ale po co sprawdzaæ czy pierwszy element jest mniejszy od pierwszego

            //if(l>x[w][k+1]) l=x[w][k+1];  <- blad, poprawione w nastêpnej linii, GENERUJE PSEUDO NOWA KOLUMNE NR 5
            if(l==x[w][k])
                i++;
            if(l>x[w][k]){
                l=x[w][k];
                i=1;
            }
            //if(k==4)
            //cout<<"Najmniejsza wartosw w wierszu "<< w<<" to "<<l<<endl;
    }
    cout<<"Najmniejsza wartosc w wierszu "<< w<<" to "<<l<<"  wastrosc wsytepuje "<<i<<" raz/y"<<endl;   // lepiej tu, choæ powy¿szy pomys³ nie powodowa³ b³êdu
}

return 0;
}
