#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main(void){
    int num[8];

    for(int i=0; i<8; i++){
        cin>>num[i];
    }

    bool ascen=true;
    bool descen=true;
    for(int i=0;i<8;i++){
        if(num[i]==i+1&&ascen) {
            ascen=true;
             descen = false;
            }
        else if (num[i]==8-i&&descen)   {
            ascen = false;
            descen=true;
        }
        else {
            ascen = false;
            descen = false;
        }
    }
    if(ascen) cout<<"ascending";
    else if(descen) cout<<"descending";
    else cout<<"mixed";
    
    return 0;
}