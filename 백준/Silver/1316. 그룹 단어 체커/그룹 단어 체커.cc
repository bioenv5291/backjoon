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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int loopnum;
    cin >> loopnum;
    int num=0;

    for(int i = 0; i < loopnum; i++){
        string str;
        cin >> str;
        
        bool isUsed[26]={false,};
        isUsed[str[0]-'a']=true;
        bool check=true;

        for(int j=1; j<str.length(); j++){
            if(str[j]==str[j-1]){
                continue;
            }
            if(isUsed[str[j]-'a']){
                check=false;
                break;
            }
            isUsed[str[j]-'a']=true;
        }
        if(check) num++;
    }

    printf("%d\n", num);


    
    return 0;
}