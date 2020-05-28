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
    fstream plik;
    plik.open("onp.txt");
    int size=100;
    char *s=new  char [size];
    int wynik;
    char operatory[100];
    int n=0;
    int l=0;
    // program odklada na stos wszystkie cyfry z wpisanego wyrazu
    while(!plik.eof()){
        plik>>s[l];
        //cout<<s[l]<<" ";
        l++;

    }
    // nie dzialalo z size zamiast l
    for(int i=0; i<l; i++){

        if ((int) s[i]>=48 && (int)s[i]<=57){
            //zeby przekonwertowac na liczbe w ascii -48
            int temp=s[i];
            NaStos(temp-48);
        }
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
                if(operatory[n]=='+'){
                    wynik=x+y;
                }
                else if(operatory[n]=='-'){
                    wynik=y-x;
                }
                else if(operatory[n]=='*'){
                    wynik=x*y;
                }
                else if(operatory[n]=='/'){
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

    //nie zapisuje do pliku
    plik<<endl<<wynik;
    plik.close();
    delete[] s;
    return 0;
}
