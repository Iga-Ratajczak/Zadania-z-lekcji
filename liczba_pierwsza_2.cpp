#include<iostream>
#include<cmath>

using namespace std;

bool pierwsza(int a){
   if (a<2)
        return false;
    else{
        int d=2;
        while(d<=sqrt(a)){
            if(a%d==0)
                return false;
            d++;
    }
    if(d>sqrt(a))
        return true;
    }
}
int main(){
if(pierwsza(41))
    cout<<"p";
else
    cout<<"z";
    return 0;
}

