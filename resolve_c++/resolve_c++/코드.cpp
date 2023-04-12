#include <iostream>
#include <cstring>

using namespace std;

struct ESSENCE {
	int total_num = 0;
	int received_nums[100] = { 0, };
	int find_num = 0;
	int find_stack = 0;
}ES;

int main()
{
	int i;

	cin >> ES.total_num;
	for (i = 0; i < ES.total_num; i++)
		cin >> ES.received_nums[i];
	cin >> ES.find_num;

	for (i = 0; i < ES.total_num; i++) {
		if (ES.received_nums[i] == ES.find_num)
			ES.find_stack++;
	}

	cout << ES.find_stack;

}