#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
void losuj(int x[],int a){
srand(time(0));
for(int i=0; i<a;i++){
    x[i]=rand()%50+1;
    cout<<x[i]<<endl;
}
}
void odwroc(int x[], int a){
    for(int i=a-1;i>=0;i--)
        cout<<x[i]<<endl;
}
int najwieksza(int x[], int a){
int max=x[0];
int i=1;
while(i<a){
    if(x[i]>max)
        max=x[i];
    i++;
}
return max;
}
int suma(int x[], int a){
int s=0;
int i=0;
while(i<a){
    s+=x[i];
    i++;
}
return s;
}
int iloczyn(int x[], int a){
int i=0;
int n=1;
while(i<a){
    n*=x[i];
    i++;
}
return n;
}

int main(){
int a;
int x[100];
cin>>a;
losuj(x,a);
odwroc(x,a);


int s=0;
int i=0;
int n=1;
while(i<a){
    s+=x[i];
    n*=x[i];
    i++;

}
cout<<"suma "<< suma(x,a)<<endl<<"iloczyn "<<iloczyn(x,a)<<endl;


cout<<"max = "<< najwieksza(x,a)<<endl;


 return 0;
}
