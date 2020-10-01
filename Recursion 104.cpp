#include <iostream>
using namespace std;

int printRecursively(int input) {
    if(input-- >1){
        printRecursively(input);

        if(input==1) {
            cout << "1 + x ";
        }

        else{
                cout << "+ x^"<<input<<" ";

            }
    }
    return input+1;

}

int main() {
    int input,number[1000],count=0;
    cin>>input;


    printRecursively(input);
    return 0;
}
