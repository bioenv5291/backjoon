#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	vector<int> num;
	int loopnum;
	int temp;

	cin >> loopnum;

	for (int i = 0; i < loopnum; i++) {
		cin >> temp;
		num.push_back(temp);
	}
	sort(num.begin(), num.end());
	
	cout << num.front() << " " << num.back();
	return 0;
}