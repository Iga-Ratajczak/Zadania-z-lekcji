#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string zdanie="Kot na plocie spi";

    remove( zdanie.begin(), zdanie.end(), ' ');  // obiekt zdanie jest klasy string
     //wypisuje kotnaplociespispi
     cout<<zdanie<<endl;

    string zdanie2="Kot na plocie spi";
    int a = zdanie2.size();
    //zliczanie ilosci spacji
      string s;
    for(int i=0; i<a; i++){
        if(zdanie2[i]!=' ')
            s+=zdanie2[i];
    }
  cout<<s<<endl;




    int t[]={5,6,12,3,4,12,5,12,17};
    int n=sizeof(t)/sizeof(int);  //liczba element�w tablicy;
    remove(&t[0],&t[n],12);  // t nie jest typu klasa, wi�c wpisa�am wska�nik pocz�tku tablicy i wska�nik na kom�rke po ostatnim elemencie tablicy
    n-=3;  // teraz ci�g jest kr�tszy o 3 elementy, inaczej napisa�o by 3 ostanie elementy nie zwazajac na ich wartosc
    for (int i=0;i<n;i++)
        cout<<t[i]<<endl;


    return 0;
}
