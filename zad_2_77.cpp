#include <iostream>
#include <fstream>

using namespace std;

int stos[100];
int wie=0;

// push
void NaStos(int n){
    //cout<<"wartosc pobrana "<<n<<endl;
   stos[wie]=(n);
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
    int wynik;
    cout<<"Wprowadz zapis w ONP"<<endl;
    cin>>s;
    string operatory[100];
    int n=0;
    // program odklada na stos wszystkie cyfry z wpisanego wyrazu
    for (int i=0;i<s.size();i++){
        if ( s[i]>='0' && s[i]<='9')
            //zeby przekonwertowac na liczbe w ascii -48
            NaStos(s[i]-48);
        else{
            operatory[n]=s[i];
            int x,y;
            //!nie potrzebne sprawdza ti poprzedni warunek
            //! generowalo y=0
            //while (!PustyStos()){
                x=ZeStosu();
                y=ZeStosu();
                //if(y!=0){
                cout<<"x = "<<x<<"y = "<<y<<endl;
                //!kolejnosc
                if(operatory[n]=="+"){
                    wynik=x+y;
                }
                else if(operatory[n]=="-"){
                    wynik=y-x;
                }
                else if(operatory[n]=="*"){
                    wynik=x*y;
                }
                else if(operatory[n]=="/"){
                    wynik=y/x;
                }
                cout<<"wartosc odozona na stos "<<wynik<<endl;
                NaStos(wynik);
                //}
            n++;
            //}
        }
    }

    cout<<"Wynik dzialan to "<<wynik<<endl;

return 0;
}
