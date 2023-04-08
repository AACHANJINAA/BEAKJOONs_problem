#include <iostream>
#include <cstring>

using namespace std;

struct typing_mistake {
	int size;
	int tm_pos[10];
	char tm_str[10][10];
}tm;

int main()
{
	int i, j;

	cin >> tm.size;

	for (i = 0; i < tm.size; i++) {				
		cin >> tm.tm_pos[i];
		cin >> tm.tm_str[i];
		for (j = 0; j < strlen(tm.tm_str[i]) - 1; j++)
			if (isupper(tm.tm_str[i][j]) == 0)
				exit(0);
	}

	for (i = 0; i < tm.size; i++) {
		for (j = tm.tm_pos[i] - 1; j < strlen(tm.tm_str[i]); j++)
			tm.tm_str[i][j] = tm.tm_str[i][j + 1];
		cout << tm.tm_str[i] << endl;
	}
	return 0;
}