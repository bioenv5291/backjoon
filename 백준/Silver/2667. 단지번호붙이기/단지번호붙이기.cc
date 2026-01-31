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

int N;
int maps[26][26];
bool visited[26][26];
string tempS;
vector<int> V;
int danji = 0;


int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool isValid(int n1, int n2){
    if(n1<=0 || n1>N || n2<=0 || n2>N) return false;
    if(maps[n1][n2]==0 || visited[n1][n2]) return false;
    return true;
}

int dfs(int x, int y){
    int house = 0;
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int nx= x+dx[i];
        int ny= y+dy[i];
        if(isValid(nx, ny)){
            house += dfs(nx, ny);
        }
    }
    return house+1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 1; i <= N; i++){
        cin >> tempS;
        for(int j=1; j<=N; j++){
            maps[i][j] = tempS[j-1]-'0';
        }
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(isValid(i, j)){
                V.push_back(dfs(i, j));
                danji++;
            }
        }
    }
    cout << danji << '\n';
    sort(V.begin(), V.end());
    for(int i=0; i<V.size(); i++){
        cout << V[i] << '\n';
    }
    return 0;
}