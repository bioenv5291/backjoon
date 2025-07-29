#include<iostream>

using namespace std;

int main(void) {
	
	int dice[3];
	int reward = 0;
	cin >> dice[0]>>dice[1]>>dice[2];
	
	if (dice[0] == dice[1] && dice[1] == dice[2]) {
		reward = 10000 + dice[0] * 1000;
	}
	else if (dice[0] == dice[1] || dice[1] == dice[2] || dice[2] == dice[0]) {
		if (dice[0] == dice[1]) {
			reward = 1000 + dice[0] * 100;
		}
		else if (dice[1] == dice[2]) {
			reward = 1000 + dice[1] * 100;
		}
		else {
			reward = 1000 + dice[2] * 100;
		}
	}
	else {
		int big = 0;
		for (int i = 0; i < 3; i++) {
			if (big < dice[i]) {
				big = dice[i];
			}
		}
		reward = big * 100;
	}
	cout << reward;
	return 0;
}