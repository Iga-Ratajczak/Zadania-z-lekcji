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

void trojkat(int a){
    int n=1;
do{
    gwiazdki(n);
    n++;
}
    while(n<=a);
}

int main(){
    int x;
    cin>> x;
trojkat(x);
        return 0;

}

