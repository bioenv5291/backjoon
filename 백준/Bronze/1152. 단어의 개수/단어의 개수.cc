#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main(void){
     string str;
    int cnt=1;
    getline(cin, str);
    for(int i=1;i<str.length()-1;i++)
    {
        if(str[i]==' ') cnt++;
    }
    if(str==" ") cnt = 0; 
    cout << cnt;
    return 0;
}