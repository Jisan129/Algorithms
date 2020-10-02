#include <iostream>

using namespace std;


int calculateFiboRecursively(int count,int sum,int input) {
    if(count>1){

        return sum+calculateFiboRecursively(count-1,sum+input,sum);
    }
}

int main() {
    int input, number[1000];
    cin >> input;


    cout << calculateFiboRecursively(input,0,1);
    return 0;
}
