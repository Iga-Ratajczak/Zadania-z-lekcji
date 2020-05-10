#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void wypisz (int t[4][3], int temp=0){
    if(temp!=0){
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                if(t[i][j]>=temp && t[i][j]<=15)
                    cout<<t[i][j]<<endl;
            }
        }
    }
    else{
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                if(t[i][j]<temp)
                    cout<<t[i][j]<<endl;
            }
        }
    }
}




void suma(int t[4][3], int dzielnik=2, int wartosc=4){
    int s=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if((i*j)%dzielnik!=0 && (i*j)<wartosc){
                s+=t[i][j];
        }
        }
    }

    cout<<"suma wynosi " <<s<<endl;
}

int main(){
    int t[4][3]={-1,2,3,4,5,1,6,2,3,4,5,6};
    suma(t, 3, 5);
    cout<<"Wpisz wartosc graniczna przedzialu wieksza od 0 i mniejsza od 15"<<endl;
    int temp;
    cin>>temp;
    wypisz(t,temp);
    cout<<endl<<endl;
    wypisz(t);


    return 0;
}
