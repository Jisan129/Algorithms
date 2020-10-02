#include <iostream>

using namespace std;


void reversePrinting(int input) {
  if(input>0){
      int a=input%10;
      input=input/10;
      cout<<a;
      reversePrinting(input);
  }
}

int main() {
    int input, number[1000], select;
    cin >> input;

    reversePrinting(input);
    return 0;
}
