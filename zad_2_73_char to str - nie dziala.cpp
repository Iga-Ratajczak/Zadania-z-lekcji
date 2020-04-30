#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define RANGE 255
string c_sort(string arr){

	// The output character array
	// that will have sorted arr
	char output[strlen(arr)];

	// Create a count array to store count of individual
	// characters and initialize count array as 0
	int count[RANGE + 1]={0};
	int i;


	// Store count of each character

	for(i = 0; arr[i]; ++i)
		count[arr[i]]++;

	// ??
	// Change count[i] so that count[i] now contains actual
	// position of this character in output array
	for (i = 1; i <= RANGE; ++i)
		count[i] += count[i-1];

	// Build the output character array
	for (i = 0; arr[i]; ++i)
	{
		output[count[arr[i]]-1] = arr[i];
		count[arr[i]]--;
	}


	// Copy the output array to arr, so that arr now
	// contains sorted characters
	for (i = 0; arr[i]; ++i)
		arr[i] = output[i];
}


//void pusta (string slowo){
    //int temp =true;

    //for(int i=1; i<size; i++){
      //  if(b_sort(slowo[i-1])!=b_sort(slowo[i]))
      //      temp = false;
       // }

   // if(temp)
     //   cout<<"Podane slowa sa angramami";
    //else
    //    cout<<"Podane slowa nie sa anagragramami";
//}
int main(){
    cout<<"Program sprawdzi czy podane slowa sa anagramami."<<endl<<endl<<"Podaj ilosc slow ktora program ma sprawdzic."<<endl;
    int size;
    cin>>size;

    cout<<"Wpisz slowa"<<endl;
    string *slowo = new string [size];
    for(int i=0; i<size; i++){
        cin>>slowo[i];
    }
    char ciag [50];
    ciag =slowo[1].c_str();
    c_sort(ciag);
    cout<<ciag;


    delete [] slowo;
    return 0;
}
