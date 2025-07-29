#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main(void){
    int testcase;
    cin>>testcase;
    
    for(int i=0; i<testcase; i++){
        int loopnum;
        string str;
        cin>>loopnum>>str;

        for(int j=0;j<str.size();j++){
            for(int k=0; k<loopnum; k++){
                cout<<str[j];
            }
        }
    cout<<endl;
   }
    
    return 0;
}