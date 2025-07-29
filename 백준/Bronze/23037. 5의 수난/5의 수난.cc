#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main(void) {
	
	int num;

	cin >> num;

	int digit[5];

	int index = 0;
	while (num != 0) {
		digit[index++] = num % 10;
		num /= 10;
	}
	
	int total = 0;
	for (int i = 0; i < 5; i++) {
		total += pow(digit[i], 5);
	}
	cout << total;
	return 0;
}

