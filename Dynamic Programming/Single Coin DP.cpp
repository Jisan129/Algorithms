#include <bits/stdc++.h>

using namespace std;
int coin[1000], number;
int dp[1000][1000];

int lcs(int i, int need) {
    if (need == 0)return 0;
    if (need < 0 or i == number)return INT16_MAX;
    if (dp[i][need] != -1)return dp[i][need];

    return dp[i][need] = min(1 + lcs(i + 1, need - coin[i]), lcs(i + 1, need));
}

int main() {
    memset(dp, -1, sizeof(dp));
    int need;
    cin >> number >> need;
    for (int i = 0; i < number; i++) {
        cin >> coin[i];
    }

    cout << lcs(0, need);
}