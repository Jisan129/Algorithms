#include <iostream>
using namespace std;

void printRecursively(int input,int number[1000]) {
    if(number[input]%2==0) cout<<number[input]<<" ";
    if(++input<5)printRecursively(input,number);

}

int main() {
    int input,number[1000],count=0;
    cin>>input;
    for (int i = 0; i < input; i++) {
        cin>>number[i];
    }

    printRecursively(count,number);
    return 0;
}
