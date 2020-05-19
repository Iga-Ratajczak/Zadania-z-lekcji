#include <iostream>

using namespace std;


int main(){
    string jawny="klamstwomakrotkienogi";
    int dlT=jawny.size();
    int klucz=9;
    string alfabet_jawny="abcdefghijklmnopqrstuvwxyz";
    int dlA=alfabet_jawny.size();
    string alfabet_szyfrowy;
    int temp=0;
    //! i=klucz i dzielisz przez liosc alfabetu
    for(int i=9; i<dlA+9; i++){
        alfabet_szyfrowy+=alfabet_jawny[i%dlA];
    }
    cout<<"alfabet szyfrowy "<<alfabet_szyfrowy<<endl;
    string kryptogram;
    for(int i=0; i<dlT; i++){
        for(int j=0; j<dlA; j++){
            //! jawny i alfabet j
            if(jawny[i]==alfabet_jawny[j]){
                kryptogram+=alfabet_jawny[(j+klucz)%dlA];
            }
        }
    }
    cout<<kryptogram;
    return 0;
}
