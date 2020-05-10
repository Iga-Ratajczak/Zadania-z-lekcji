#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool sprawdz (int *t, int temp){
    for(int i=0;i<15;i++){
            if(t[i]==temp)
                return true;
    }
    return false;
}
bool sprawdz (int *t){
    for(int i=0;i<15;i++){
            if(t[i]>4)
                return false;
    }
    return true;
}

void suma(int *t, int dzielnik=5, int wartosc=3){
    int s=0;
    for(int i=0;i<15;i++){
        if(i%dzielnik!=0 && i>wartosc)
            s+=t[i];
    }

    cout<<"suma wynosi " <<s<<endl;
}

int main(){
    int t[15]={1,2,3,4,5,1,6,2,3,4,5,6,67,7,8};
    suma(t);
    cout<<"wprowadz wartosc ktora program ma sprawdzic czy istnieje w tablicy"<<endl;
    int temp;
    cin>>temp;
    if(sprawdz(t, temp))
        cout<<"W funkcji jest podana wartosc"<<endl;
    else
        cout<<"W funkcji nie ma podanej wartosci"<<endl;
    if(sprawdz(t))
        cout<<"w tab nie ma elementow wiekszych od 4"<<endl;
    else
        cout<<"W tab sa elementy wieksze od 4"<<endl;

    return 0;
}
