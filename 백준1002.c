#include <stdio.h>
#include <math.h>
int main() {
	int cnt = 0;

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
	{
		int x1, y1, r1, x2, y2, r2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
	
		double d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		double r = r1 + r2;
		
		if (x1 == x2 && y1 == y2 && r1 == r2)
			printf("-1\n");
		else if (d == r || d == abs(r1 - r2)) // 외접, 내접
			printf("1\n");
		else if(abs(r1-r2) < d || r > d)
			printf("2\n");
		else if (r < d || d < abs(r1 - r2))
			printf("0\n");
			
	}

	return 0;
}