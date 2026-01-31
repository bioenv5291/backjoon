#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>

//#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> Q;

int N, M;
int board[1001][1001];
bool visited[1001][1001];
int shortest[1001][1001];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int ans = 0;



bool isValid(int a, int b){
    if(a<=0 || a>N || b<=0 || b>M) return false;
    if(board[a][b]==-1||visited[a][b]) return false;
    return true;
}

bool isPossible(){
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            if(!visited[i][j] && board[i][j]==0) return false;
        }
    }
    return true;
}

int max_data(){
    int ret=0;
    for(int i =1; i<=N; i++){
        for(int j=1; j<=M; j++){
            if(board[i][j]!=-1){
                ret=max(ret, shortest[i][j]);
            }
        }
    }
    return ret;
}

void bfs(){
    while(!Q.empty()){
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();
        for(int i=0; i<4; i++){
            int nx= x+dx[i];
            int ny= y+dy[i];
            if(isValid(nx, ny)){
                Q.push(make_pair(nx, ny));
                visited[nx][ny]=true;
                shortest[nx][ny]=shortest[x][y]+1;
            }
        }
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M>>N;
    for (int i = 1; i <= N; i++){
        for(int j=1; j<=M; j++){
            cin >> board[i][j];
            if(board[i][j]==1){
                Q.push(make_pair(i, j));
                visited[i][j]=true;
            }
        }
    }

    bfs();
    if(!isPossible()) ans=-1;
    else ans=max_data();
    cout<<ans;
    return 0;
}