#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<fstream>

using namespace std;
int main(){
    ofstream wy("wyniki.txt",ios::app);
    for(int i=1;i<10;i++){
        wy<<i*i-1<<endl;

    }

    wy.close();
 return 0;
}
