#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


main(){
    int i,s;
    s=i;
    while (s%7!=0){
        srand(time(NULL));
        s=s+i;
        i=2+rand()%(50-2+1);
    }
    cout<<s;
        return 0;

}

