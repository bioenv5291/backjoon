#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main() {
    int alpha[26]={0};
    int same=0;
    char s;
    
   while (cin >> s) {
        if (s < 97)
            alpha[s - 65]++;
        else
            alpha[s - 97]++;
    }
 
    int max = 0, maxnum=0;
    
    for(int i=0; i<26; i++){
        if(max < alpha[i]){
            max = alpha[i];
            maxnum = i;
            same = 0;
        }else if(max == alpha[i]){
            same++;
        }
    }
    if(same>0){
        cout<<'?';
    }else{
        cout<<(char)('A'+maxnum);
    }
    return 0;
}
