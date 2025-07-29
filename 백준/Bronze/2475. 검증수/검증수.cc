#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main() {
    int num[5];

    for(int i=0; i<5;i++){
        cin>>num[i];
    }
    int total;
    total=(num[0]*num[0]+num[1]*num[1]+num[2]*num[2]+num[3]*num[3]+num[4]*num[4])%10;
    cout<<total;
    return 0;
}
