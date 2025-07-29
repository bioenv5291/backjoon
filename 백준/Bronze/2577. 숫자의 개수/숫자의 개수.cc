#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	int numA, numB, numC;
	
	int total;

	int digit[10] = {0,};

	cin >> numA;
	cin >> numB;
	cin >> numC;

	total = numA * numB * numC;

	while (total != 0) {
		for (int i = 0; i < 10; i++) {
			if (total % 10 == i) {
				digit[i]++;
			}
			
		}
		total /= 10;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << digit[i] << endl;
	}
	return 0;
}