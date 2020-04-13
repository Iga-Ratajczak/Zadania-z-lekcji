#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int x[4][2]={1,3, 1,3, 2,8, 3,120};
    for(int w=0;w<4;w++){
        for (int k=0;k<2;k++){
            cout<<x[w][k]<<"\t";
            }
            cout<<endl;
    }
    int m=1;
    for(int w=0;w<4;w++){
        for (int k=0;k<2;k++){
                if((x[w][k])%3==0)
                    m=m*x[w][k];
        }
    }
    cout<<"iloczyn elementow tablicy ktorych wartosc jest podzielna przez 3: "<<m<<endl;



    int l=0;
    for(int w=0;w<4;w++){
        for (int k=0;k<2;k++){
                if(x[w][k]!=0)
                    l++;
        }
    }
    cout<<"liczba elementow tablicy ktorych wartosc jest rozna od 0: "<<l<<endl;

    int p=0;
    for(int w=0;w<4;w++){
        for (int k=0;k<2;k++){
                if(x[w][k]>19)
                    p++;
        }
    }
    if(p>0)
        cout<<"\nitnieje element wiekszy od 19";
    else
        cout<<"\nnie itnieje element wiekszy od 19";
    return 0;
    }
