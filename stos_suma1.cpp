#include <iostream>
#include <fstream>

using namespace std;

int stos[100];
int wie=0;

// push
void NaStos(int n){
   stos[wie]=n;
   wie++;
}
// pop
int ZeStosu(){
    wie--;
    return stos[wie];
}

// empty
bool PustyStos(){
    if (wie==0) return true;
    return false;
}

int main(){
    string s;
    cin>>s;
    // program odklada na stos wszystkie cyfry z wpisanego wyrazu
    for (int i=0;i<s.size();i++)
        if ( s[i]>='0' && s[i]<='9')
            NaStos(s[i]-'0');
    // program pobiera cyfry ze stosu, oblicza ich sumê, na ekranie wypisuje parzyste
    int x,suma=0;
    while (!PustyStos()){
        x=ZeStosu();
        if (x%2==0)
            cout<<x<<endl;
        suma+=x;
    }
    cout<<"Suma wszystkich elementow to "<<suma<<endl;

return 0;
}
