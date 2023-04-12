#include <iostream>
#include <cstring>

using namespace std;

struct SCALE {
	int sequence[1001] = {0, };
	int the_biggest = 0;
	int the_smallest = 0;
	int ADD_price = 0;
}scale;

int main()
{
	int i, j, arr_num = 1;

	for (i = 1; i < 46; i++) {
		for (j = i; j > 0; j--){
			scale.sequence[arr_num] = i;
			arr_num++;
			if (arr_num > 1000)
				break;
		}
		if (arr_num > 1000)
			break;
	}

	cin >> scale.the_smallest;
	cin >> scale.the_biggest;

	for (i = scale.the_smallest; i <= scale.the_biggest; i++) {
		scale.ADD_price += scale.sequence[i];
	}

	cout << scale.ADD_price;
}