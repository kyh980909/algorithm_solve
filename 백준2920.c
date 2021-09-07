#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int scale[8] = { 0 };
	int asc = 0;
	int desc = 0;
	int temp = 0;

	scanf("%d %d %d %d %d %d %d %d", &scale[0], &scale[1], &scale[2], &scale[3], &scale[4], &scale[5], &scale[6], &scale[7]);

	for (int i = 0; i < 4; i++)
	{
		if (scale[i] + 4 == scale[i + 4]) {
			asc++;
		}
		else if (scale[i] - 4 == scale[i + 4]) {
			desc++;
		}
		else {
			printf("mixed");
			return 0;
		}

		if (i == 3)
			temp = scale[i + 4];
	}

	if (asc == 4 && temp == 8) printf("ascending");
	else if (desc == 4 && temp == 1) printf("descending");
	else printf("mixed");

	return 0;
}