#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int d(int number);

int main(void) {
	
	bool flag[10001] = { false, };

	for (int i = 1; i < 10001; i++) {
		int n = d(i);
		if (n < 10001)	flag[n] = true;
	}

	for (int i = 1; i < 10001; i++) {
		if (flag[i] == false)	cout << i << "\n";
	}

	return 0;
}

int d(int number) {
	int sum = number;

	while (number != 0) {
		sum = sum + (number % 10);
		number = number / 10;
	}

	return sum;
}