#include <iostream>

using namespace std;
void wypisz(int t[],int n){
for(int i=0;i<n;i++)
    cout<<t[i]<<"   ";
cout<<endl;
}
int main()
{int t[]={12,10,8,7,9,5,14};
    int n=sizeof(t)/sizeof(int);
for(int j=0;j<n-1;j++){
    int m=t[j];
    int k=j;
    for(int i=j+1;i<n;i++){
        if(t[i]<m){
            m=t[i];
            k=i;
        }
    }
    swap(t[j],t[k]);

    wypisz (t,n);
}

    return 0;
}
