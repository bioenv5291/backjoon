#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(void) {
	

	int loopnum;
	
	cin >> loopnum;
	cin.ignore();
	string* result = new string[loopnum];
	int* score = new int[loopnum];
	

	for (int i = 0; i < loopnum; i++) {
		getline(cin,result[i]);
		score[i] = 0;
		//cin.ignore(80, '\n');
	}
	//cin.ignore();
	bool flag = false;
	int val = 0;
	for (int i = 0; i < loopnum; i++) {
		for (int j = 0; j < result[i].size(); j++) {
			if (result[i][j] == 'O') {
				if (flag == false) {
					val = 1;
					flag = true;
				}
				else{
					val++;
				}
			}
			else {
				flag = false;
				val = 0;
			}
			score[i] += val;
			
		}
		
		
		flag = false;
	}
	for (int i = 0; i < loopnum; i++) {
		cout << score[i] << endl;
	}
	delete[] result;
	delete[] score;
	return 0;
}