#include <iostream>
using namespace std;

int main (void)
{
    int x,total=0;
    cin>>x;
    
    for(int i=1;i<=x;i++){
        total+=i;
    }
    cout<<""<<total;
    return 0;
}