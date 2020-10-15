#include <iostream>
using namespace std;
int cost[1000][1000];
int visited[1000][1000];
int path[1000][1000];


int mincount(int i,int j) {
    if(i==0&&j==0)return cost[i][j];
    if(visited[i][j]==1)return path[i][j];
    visited[i][j]=1;

    if(i==0){
        path[i][j]= cost[i][j]+mincount(i,j-1);
        return path[i][j];
    }
    if(j==0){
        path[i][j]= cost[i][j]+mincount(i-1,j);
        return path[i][j];
    }
    else{
        path[i][j]=cost[i][j]+min(mincount(i,j-1),mincount(i-1,j));
        return path[i][j];
    }



}

int main() {
    int number,index1,index2;
    cin>>number;
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            cin>>cost[i][j];
        }
    }
    cout<<"Give the index";
    cin>>index1>>index2;
    cout<<mincount(index1,index2);
    return 0;
}
