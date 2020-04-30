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
    int n=sizeof(t)/sizeof(int);  //liczba elementów tablicy;
    remove(&t[0],&t[n],12);  // t nie jest typu klasa, wiêc wpisa³am wskaŸnik pocz¹tku tablicy i wskaŸnik na komórke po ostatnim elemencie tablicy
    n-=3;  // teraz ci¹g jest krótszy o 3 elementy, inaczej napisa³o by 3 ostanie elementy nie zwazajac na ich wartosc
    for (int i=0;i<n;i++)
        cout<<t[i]<<endl;


    return 0;
}
