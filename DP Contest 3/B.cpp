#include <bits/stdc++.h>

using namespace std;

long long a[1000];
long long  dp[100][100];

long long  sum(int start, int last) {
    long long  answer = 0;
    for (int i = start; i <= last; i++) {
        answer += a[i];
        answer %= 100;
    }
    return answer;
}

long long multiplicationFunc(int i, int j) {
    if (i >= j)return 0;
    if (dp[i][j] != -1)return dp[i][j];
    dp[i][j] = INT16_MAX;
    for (int k = i; k < j; k++) {
        long long  answer2 = multiplicationFunc(i, k) + multiplicationFunc(k + 1, j) + sum(i, k) * sum(k + 1, j);
        dp[i][j] = min(dp[i][j], answer2);
    }
    return dp[i][j];
}

int main() {

    int test;
    while (cin >> test) {
        memset(dp, -1, sizeof(dp));
        memset(a,0,sizeof(a));
        for (int i = 0; i < test; i++) {
            cin >> a[i];
        }
        cout << multiplicationFunc(0, test);
    }

    return 0;

}
