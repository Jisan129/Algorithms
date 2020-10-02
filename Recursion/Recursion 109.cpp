#include <iostream>

using namespace std;

int calculateGcdRecursively(int first, int second,int divider) {
    if(second<first){
        swap(first,second);
    }
    if(first%divider==0&&second%divider==0)return divider;
    else if(divider>first)return 1;
    else{
        calculateGcdRecursively(first,second,divider+1);
    }
   // return 0;
}

int main() {
    int first,second;
    cin >> first>>second;


    cout << calculateGcdRecursively(first,second,2);
    return 0;
}
