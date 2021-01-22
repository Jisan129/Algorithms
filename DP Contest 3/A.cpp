#include<bits/stdc++.h>
using namespace std;


int n;
int cost[16][16];
int dp[1<<16][16];


int turnOn(int x,int pos) {
    return x | (1<<pos);
}

bool isOn(int N,int pos) {
    return (bool)(N & (1<<pos));
}

int call(int mask,int pos)
{
    if(mask == (1<<n) - 1) return 0;
    /
    if(dp[mask][pos]!=-1) return dp[mask][pos];

    int ret = -5;

    for(int i=0;i<n;i++)
    {
        if(isOn(mask,i)) continue;

        ret = max(ret, cost[pos][i] + call(turnOn(mask,i),pos+1));

    }

    return dp[mask][pos] = ret;

}


int main()
{
    int test,a;
    cin>>test;
    a=test;

    while (test>0){
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>cost[i][j];
    }

    memset(dp,-1,sizeof(dp));
    cout<< "Case "<<a-test+1<<": " <<call(0,0)<<endl;
        test--;

    }
}
