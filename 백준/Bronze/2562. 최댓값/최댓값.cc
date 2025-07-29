#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	int index;
	int max=0;
	int arr[9];

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i + 1;
		}
	}
	cout << max << endl << index;
	return 0;
}