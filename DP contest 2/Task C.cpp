#include<bits/stdc++.h>
using namespace std;

long long dp[51][251];

long long countcoin(long long a[],long long m,long long n)
{
    long long i,j;
    for(i=0;i<m+1;i++)dp[i][0]=1;

    for(i=1;i<m+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]=dp[i][j-a[i-1]]+dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    return dp[m][n];
}

int main(void)
{
    long long n,m,i;
    cin >> n >> m;
    long long a[m+5];

    for(i=0;i<m;i++)cin>>a[i];

    cout << countcoin(a,m,n);

    return 0;

}
