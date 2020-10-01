#include <iostream>
using namespace std;


int calculateRecursively(int input,int element) {
  if(--input>=1){
      return element+element*calculateRecursively(input,element);
  }
}

int main() {
    int input,number[1000],element;
    cin>>element>>input;


    cout<<calculateRecursively(input,element)+1;
    return 0;
}
