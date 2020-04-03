#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> myvector;

    cout<<"nowa tabela: "<<endl;
    int x[5][5];
    srand(time(0));
    for(int w=0;w<5;w++){
        for (int k=0;k<5;k++){
            x[w][k]=rand()%108-20;
            myvector.push_back(rand()%108-20);
            cout<<x[w][k]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"posortowana tabela: "<<endl;



    sort(myvector.begin(),myvector.end());
    cout << "myvector contains:";
    for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';


    for(int w=0;w<5;w++){
        for (int k=0;k<5;k++){
            cout<<x[w][k]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
