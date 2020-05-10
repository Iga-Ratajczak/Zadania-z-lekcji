#include <iostream>

using namespace std;

int main(){
    int a,b, c,maximum;
    cout<<"Podaj trzy liczby "<<endl;
    cin>>a>>b>>c;
    maximum=a>b&&a>c?a:b>c;
    if(maximum == a)
        cout<<"maximum = "<<a<<endl;
    else if(maximum == 0)
        cout<<"maximum = "<<c<<endl;
    else
        cout<<"maximum = "<<b<<endl;


    return 0;
}
