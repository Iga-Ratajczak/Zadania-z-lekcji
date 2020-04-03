#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
int a;
int x[100];
cin>>a;
srand(time(0));
for(int i=0; i<a;i++){
    x[i]=rand()%50+1;
    cout<<x[i]<<endl;
}

int s=0;
int i=0;
int n=1;
while(i<a){
    s+=x[i];
    n*=x[i];
    i++;

}
cout<<s<<endl<<n<<endl;

int max=x[0];
i=1;
while(i<a){
    if(x[i]>max)
        max=x[i];
    i++;
}
cout<<"max ="<< max<<endl;

for(int i=a-1;i>=0;i--)
cout<<x[i]<<endl;
 return 0;
}
