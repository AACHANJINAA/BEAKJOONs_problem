#include <iostream>
#include <cstring>

using namespace std;

struct answer {
	int receive_num[10];
	int aver;
	int frequently_num;
	int fre_n[10];
	int fre_thenumber[10];
};

int main() {
	answer ans;
	ans.aver = 0;
	int i, j;
	for (i = 0; i < 10; i++)
		ans.fre_thenumber[i] = 0;

	for (i = 0; i < 10; i++) {
		cin >> ans.receive_num[i];
		if ((ans.receive_num[i] < 10 || ans.receive_num[i] > 1000) && ans.receive_num[i] % 10 != 0)
			exit(0);
		ans.aver += ans.receive_num[i];
	}
	ans.aver /= 10;

	for (i = 0; i < 10; i++) {
		ans.fre_n[i] = ans.receive_num[i];
		for (j = 0; j < 10; j++)
			if (ans.fre_n[i] == ans.receive_num[j])
				ans.fre_thenumber[i]++;
		if (i != 0) {
			if (ans.fre_thenumber[i] > ans.fre_thenumber[i - 1])
				ans.frequently_num = ans.receive_num[i];
		}
		else 
			ans.frequently_num = ans.receive_num[0];
	}
	
	cout << ans.aver << endl; 
	cout << ans.frequently_num << endl;
}