#include <bits/stdc++.h>
using namespace std;
int Z[1000000];

void Zalgo(string basicString) {
   int left =0;
   int right=0;
    for (int i = 1; i <basicString.length();  i++) {

        if(i>right){
            left = right =i;
            while(right<basicString.length()&&basicString[right]==basicString[right-left]){
                right++;
            }
            Z[i]=right-left;
            right--;
        }

        else{
            int k=i-left;
            if(Z[k]<right-i+1){
                Z[i]=Z[k];
            }
            else{
                left=i;
                while(right<basicString.length()&&basicString[right]==basicString[right-left]){
                    right++;
                }
                Z[i]=right-left;
                right--;
            }
        }
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
        cout<<"Case "<<order<<": "<<1<<endl;

    }
    else{
    int result=0;
    cin>>pat;
    Zalgo(pat);
    for (int i = 0; i < pat.length(); i++) {
/*
        cout<<Z[i]<<" ";
*/
            if(Z[i]+i==pat.length()){
                result++;
            }
    }
   cout<<"Case "<<order<<": "<<result<<endl;
   }}
    return 0;
}
