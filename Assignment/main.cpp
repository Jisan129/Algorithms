#include<bits/stdc++.h>

using namespace std;
const int maxnodes = 100;
int n,pr[110],cap[110][110],regulator[1000];

int bfs(int src,int des)
{
    int vis[110]= {0};
    vis[src]=1;
    pr[src]=-1;
    queue<int>Q;
    Q.push(src);

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=1; i<=n; i++)
        {
            if(vis[i] or cap[u][i]<=0) continue;
            Q.push(i);
            vis[i]=1;
            pr[i]=u;

        }
    }

    return vis[des];
}
int maxFlow(int src,int des)
{
    int f=0;
    while(bfs(src,des))
    {

        int path=1e9;
        for(int i=des; i!=src; i=pr[i]) path=min(path,cap[pr[i]][i]);

        for(int i=des; i!=src; i=pr[i])
        {
            if(regulator[i]>path){
            int u=pr[i];
            int v=i;
            cap[u][v] -= path;
            cap[v][u] += path;
            regulator[i]-=path;
            }

        }

        f+=path;

    }
    return f;
}




int main()
{

    int t,case_no=0;
    cin >> t;
    while(t--){

        int temp,edge,s,t;
        cin >> n;
        memset(regulator,100,sizeof regulator);
        for (int i = 1; i < n+1; i++) {
        cin >>temp;
        regulator[i]=temp *(8/10);
        }
        cin >>edge;
        for (int i = 0; i < edge; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            cap[a][b] += c;
            cap[b][a] += c;
        }
        cout <<"Case "<<++case_no<<": "<< maxFlow(s,t) << "\n";

        memset(pr,0,110);
        memset(cap,0,sizeof cap);
    }

}
