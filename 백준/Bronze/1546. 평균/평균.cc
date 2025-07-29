#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	

	int loopnum;
	vector<int> v;
	int score;
	cin >> loopnum;

	for (int i = 0; i < loopnum; i++) {
		cin >> score;
		v.push_back(score);
	}
	
	sort(v.begin(), v.end());

	int max = v.back();
	//cout << max << endl;
	float total = 0;

	
	//v.pop_back();

	for (int i = 0; i < loopnum; i++) {
		
		
		total += v.back();
		v.pop_back();
	}
	//printf("%f", total / loopnum);
	cout << (total/max*100) / loopnum;
	return 0;
}