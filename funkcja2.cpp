#include<iostream>
using namespace std;


void gwiazdki(int a){
do{
    cout<<"*";
    a--;
}
while (a>0);
cout<< endl;
}

int main(){
    int x;
    cin>> x;
gwiazdki(x);
gwiazdki(2*4);
        return 0;

}

