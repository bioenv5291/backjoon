#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;


int main(void) {
    int digit[26];
    char word[100] = { 0 };
    for (int i = 0; i < 26; i++) {
        digit[i] = -1;
    }

    scanf("%s", word);

    int index = 0;
    int start = 'a';

    while (word[index] != 0) {
        start = 'a';
        for (int i = 0; i < 26; i++) {
            if (word[index] == start&&digit[i]==-1) {
                digit[i] = index;
               
            }
            start++;
        }
        index++;
    }
    for (int i = 0; i < 26; i++) cout << digit[i] << " ";

	return 0;
}
