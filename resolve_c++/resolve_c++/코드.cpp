#include<iostream>
using namespace std;

struct X {
	int humans_num[10][2];
	int current_num;
	int max_num;
};


int main() {
	X num;
	num.current_num = 0;
	num.max_num = 0;
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 2; k++) {
			cin >> num.humans_num[i][k];
			if (num.humans_num[i][k] >= 10000)
				exit(0);
			if (k == 0)
				num.current_num -= num.humans_num[i][k];
			else if (k == 1)
				num.current_num += num.humans_num[i][k];
		}
		if (num.current_num > num.max_num)
			num.max_num = num.current_num;
	}

	cout << num.max_num << endl;
}