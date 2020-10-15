#include <iostream>
using namespace std;
int fibo[1000];
int visited[1000];
int fibonacci(int number) {
    if(number==0)return 0;
    else if(number==1)return 1;
    if(visited[number]==1)return fibo[number];
    else{
        visited[number]=1;
        fibo[number]=fibonacci(number-1)+fibonacci(number-2);
    }
    return fibo[number];
}

int main() {
    int number;
    cin>>number;
    cout<<fibonacci(number);
    return 0;
}
