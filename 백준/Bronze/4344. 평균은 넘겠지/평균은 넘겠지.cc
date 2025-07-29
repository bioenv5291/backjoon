#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main(void) {
	

	int loopnum;
	
	cin >> loopnum;
	float* average = new float[loopnum];
	for (int i = 0; i < loopnum; i++) {
		int casenum;
		cin >> casenum;
		int* score = new int[casenum];
		float total = 0;
		for (int j = 0; j < casenum; j++) {
			cin >> score[j];
			total += score[j];
		}
		total = total / casenum;
		float tmp = 0;
		for (int j = 0; j < casenum; j++) {
			if (total < score[j]) tmp++;
		}
		average[i] = (tmp * 100 / casenum);
		average[i] = round(average[i] * 1000) / 1000;
		
		delete[] score;
	
	}
	for (int i = 0; i < loopnum; i++) {
		cout << average[i] << "%" << endl;
	}
	delete[] average;
	return 0;
}