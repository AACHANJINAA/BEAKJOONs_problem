#include <iostream>
#include <cstring>

using namespace std;

struct FIND_MAXANDMIN {
	int num;
	int max_num;
	int min_num;
}fmm;

int main()
{
	int i;
	int temp;
	cin >> fmm.num;

	int *rec_nums = (int*)malloc(sizeof(int) * fmm.num);

	for (i = 0; i < fmm.num; i++)
		cin >> rec_nums[i];

	fmm.min_num = fmm.max_num = rec_nums[0];
	for (i = 1; i < fmm.num; i++) {
		if (fmm.min_num > rec_nums[i]) {
			temp = fmm.min_num;
			fmm.min_num = rec_nums[i];
			rec_nums[i] = temp;
		}

		if (fmm.max_num < rec_nums[i]) {
			temp = fmm.max_num;
			fmm.max_num = rec_nums[i];
			rec_nums[i] = temp;
		}
	}

	cout << fmm.min_num << " " << fmm.max_num << endl;

	free(rec_nums);
}