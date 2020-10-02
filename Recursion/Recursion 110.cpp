#include <iostream>

using namespace std;

int calculateLcdRecursively(int first, int second,int multiplier) {

    if(multiplier%second==0&&multiplier%first==0){
        return multiplier;
    } else{
        calculateLcdRecursively(first,second,multiplier+second);
    }

   // return 0;
}

int main() {
    int first,second;
    cin >> first>>second;

    if(first>second)
    {
        swap(first,second);
    }
    cout << calculateLcdRecursively(first,second,second);
    return 0;
}
