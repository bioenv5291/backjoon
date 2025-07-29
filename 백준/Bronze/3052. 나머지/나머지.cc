#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	

	int num[10] = {0,};
	int res[10] = { -1, };
	int val=0;

	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < 10; i++) {
		res[i] = num[i] % 42;
		//cout << res[i] << endl;
	}
	sort(res, res + 10);
	for (int i = 0; i < 9; i++) {
		if (res[i] != res[i + 1])	val++;
	}
	
	cout << val+1;
	
	return 0;
}