#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;


int main(){
int x[10];
srand(time(0));
int s=0;
int n=1;
cout<<"wylosowane liczby "<<endl;
for(int i=0;i<10;i++){
    x[i]=rand()%34-10;
    s=s+x[i];
    if(x[i]<6)
        n=n*x[i];
cout<<x[i]<<endl;
}
cout<<"suma to "<<s<<endl;
cout<<"iloczyn to "<<n<<endl;



 return 0;
}
