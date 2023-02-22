#include <iostream>
#include <cstring>

using namespace std;

struct multiply {
	int need_mul_num[3];
	int answer;
	int count_num[10];
};

int main() {
	multiply m;
	int i;

	m.answer = 1;

	for (i = 0; i < 10; i++)
		m.count_num[i] = 0;

	for (i = 0; i < 3; i++) {
		cin >> m.need_mul_num[i];
		m.answer *= m.need_mul_num[i];
	}

	int cnt = 0;
	i = 1;

	while (true) {
		int whats_len = int(m.answer / i);
		if (whats_len <= 0)
			break;
		cnt++;
		i *= 10;
	}

	for (i = 0; i < cnt; i++) {
		int whats_num = m.answer % 10;

		m.answer /= 10;

		m.count_num[whats_num]++;
	}

	for (i = 0; i < 10; i++)
		cout << m.count_num[i] << endl;
}