#include <bits/stdc++.h>

using namespace std;
int coin[1000], number;
int dp[1000],sum=0;
int visited[100];


int coinCount(int need) {
    if(need==0){
        visited
        return 0;};
    if(need<0)return INT16_MAX;
    int answer =INT16_MAX;
    for (int i = 0; i < number; i++) {
        answer=min(answer,1+coinCount(need-coin[i]));
    }
    return dp[need]=answer;
}

int main() {
    memset(dp, -1, sizeof(dp));
    int need;
    cin >> need >> number;
    for (int i = 0; i < number; i++) {
        cin >> coin[i];
    }

     cout<<coinCount(need);
    cout<<sum;
}