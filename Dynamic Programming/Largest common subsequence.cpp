#include <iostream>
using namespace std;
string s1,s2;
int dp[20][20];
int visited[20][20];

int lcs(int i, int j) {
    if(i>=s1.length()||j>=s2.length())return 0;
    if(visited[i][j]==1)return dp[i][j];
    visited[i][j]=1;
    if(s1[i]==s2[j]){
        dp[i][j]=1+lcs(i+1,j+1);
        return dp[i][j];
   } else{
        dp[i][j]=max(lcs(i,j+1),lcs(i+1,j));
        return dp[i][j];
    }
}

int main() {
    cin>>s1>>s2;
    cout<<lcs(0,0);
    return 0;
}
