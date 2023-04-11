#include <iostream>
#include <cstring>

using namespace std;

struct THE_REST {
	int receive_nums[10] = {0, };
	int count_what_another_num = 1;
}tr;

int main()
{
	int i, j;
	
	for (i = 0; i < 10; i++)
		cin >> tr.receive_nums[i];

	for (i = 1; i < 10; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (tr.receive_nums[i] % 42 == tr.receive_nums[j] % 42) {
				tr.count_what_another_num--;
				break;
			}
		}
		tr.count_what_another_num++;
	}

	cout << tr.count_what_another_num << endl;
}