#include <iostream>
using namespace std;



int calculateFactorialRecursively(int input) {
    if(input>1){
        int a=input*calculateFactorialRecursively(input-1);
        return a;
    }
}

int main() {
    int input,number[1000],element;
    cin>>input;


    cout<<calculateFactorialRecursively(input);
    return 0;
}
