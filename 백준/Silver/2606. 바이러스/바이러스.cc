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

int N, M;
int graph[101][101];
bool visited[101];

int n1, n2;
vector<int> virus;



bool isValid(int prev, int nxt){
    if(graph[prev][nxt]==1 && !visited[nxt]) return true;
    return false;
}

void dfs(int sp){
    stack<int> S;
    S.push(sp);
    visited[sp] = true;
    virus.push_back(sp);
    while(!S.empty()){
        int curr= S.top();
        bool isDeepest = true;
        for(int i=1; i<=N; i++){
            if(isValid(curr, i)){
                S.push(i);
                virus.push_back(i);
                visited[i] = true;
                isDeepest = false;
                break;
            }
        }
        if(isDeepest){
            S.pop();
        }
        }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N>>M;
    for (int i = 1; i <= M; i++){
        cin >> n1>>n2;
        graph[n1][n2]=1;
        graph[n2][n1]=1;
    }

    dfs(1);
    cout<<virus.size()-1;
    return 0;
}