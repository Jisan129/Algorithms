#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string s1;
char s2[6000];
int dp[6000][6000];
int visited[6000][6000];

int lcs(int i, int j) {
    if(i>=s1.length()||j>=s1.size())return 0;
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
    int number;
    cin>>number;

    memset(dp,0,sizeof(dp));
    memset(visited,0,sizeof(visited));
    cin>>s1;
    s1.copy(s2,s1.length());
    reverse(s1.begin(),s1.end());
    //cout<<s1<<endl;
   // cout<<s2;
    cout<<(number-lcs(0,0));
   // cout<<2*(number-lcs(0,0));
    return 0;
}
