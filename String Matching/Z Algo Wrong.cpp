#include <bits/stdc++.h>
using namespace std;
int Z[1000000];

void Zalgo(string basicString) {
    int length=basicString.length();
    for (int i = 1; i < length; i++) {
        int count=0;
        int temp=i;
        for(int j = 0; j <length;j++){
            if(basicString[temp++]==basicString[j]){

                count++;
            }
            else{
                break;
            }
        }
        Z[i]=count;
    }
}

int main() {
    int test,order=0;
    cin>>test;
    while(order!=test){
        order++;

    memset(Z, 0, sizeof(Z));
    string pat;
    if(pat.size()==1){
        cout<<"Case "<<order<<": "<<1;

    }
    else{
    int result=0;
    cin>>pat;
    Zalgo(pat);
    for (int i = 0; i < pat.length(); i++) {
            if(Z[i]+i==pat.length()){
                result++;
            }
    }
    cout<<"Case "<<order<<": "<<result;
   }}
    return 0;
}
