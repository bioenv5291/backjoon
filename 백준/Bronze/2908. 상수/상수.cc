#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int swap(int num);

int main() {
    int num1, num2;

    cin>> num1>>num2;

    num1 = swap(num1);
    num2 =swap(num2);
    if(num1>num2) cout<<num1;
    else cout<<num2;

    return 0;
}

int swap(int num){
    int tmp=0;
    //cout<<num/100<<endl<<num%100<<endl<<(num%10)*100<<endl;
    tmp=num/100+num%100+(num%10)*100-(num%100)%10;
    return tmp;
}