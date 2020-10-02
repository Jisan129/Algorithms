#include <bits/stdc++.h>
using namespace std;


void reversePrinting(string input,int size) {

 if(size<input.size()){
     reversePrinting(input,size+1);
     cout<<input[size];
 }
}

int main() {
    //int input, number[1000], select;
    string input;
    cin >> input;
    reversePrinting(input,0);
    return 0;
}
