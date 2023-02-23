//#include <stdio.h>
#include <iostream>
using namespace std;

void calc() {
	float num1;
	float num2;
	float answer;
	cout << "A couple of numbers, if you please:" << endl;
	cin >> num1 >> num2; 
	if (num2 == 0) {
		cout << "undefined" << endl;
	}
	else{
	answer = num1 / num2;
	cout << "Division of "<< num1<< " by "<< num2 << ": " << answer << endl;
	}
	if (num1 < num2) {
		cout << "in order: " << num1 << " " << num2 << endl;
	}
	else if (num2 < num1) {
		cout << "in order: " << num2 << " " << num1 << endl;
	}
	if (num1 == 13 ) {
		cout << "Bad luck!:" << endl;
	}
	else if (num2 == 13) {
		cout << "Bad luck!:" << endl;
	}
	int num3;
	int num4;
	num3 = num1;
	num4 = num2;
	if (num3 % 2 != 0) {
		cout << "Odd: " << num3 << endl;
	}
	if (num4 % 2 != 0) {
		cout << "Odd: " << num4 << endl;
	}
}

int main() {
	while (1)
		calc();
}