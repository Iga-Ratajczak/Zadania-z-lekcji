#include<iostream>
using namespace std;
int main (){

        int il=1,a,b=0;

        do {
            cin >>a;
            il=il*a;
            if (a!=0)
                b++;
            }
            while (il<=10000);
            cout<< "tyle jest licz roznych od 0 " << b<< endl;
            cout << "iloczyn rowny "<< il;
        return 0;

}
