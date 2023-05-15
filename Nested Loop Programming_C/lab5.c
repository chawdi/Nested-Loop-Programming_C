#include <stdio.h>
#include <math.h>
int main(void)
{
	double x_s = 1;
	double x_e = 5;
	int n = 20;
	int m = 4;

	/*char check;
	do{*/

		printf("Start X value: ");
		scanf_s("%lf", &x_s);

		printf("End X value: ");
		scanf_s("%lf", &x_e);

		printf("N value: ");
		scanf_s("%d", &n);

		printf("M value: ");
		scanf_s("%d", &m);

		double dx = (n == 1) ? 0 : (x_e - x_s) / (n - 1);
		double s1 = 0;
		double x_cur = x_s;
		int i;
		for (i = 1; i <= m; ++i)
			s1 += (x_cur + i)*(x_cur + i);

		double p, y;
		p = 1;
		for (int j = 1; j <= m; ++j)
			p *= ((1 + j*j) / (4 + j));
		for (i = 1; i <= n; ++i) {
			if (x_cur == 0) {
				printf("Error. X = 0.\n");
				return 1;
			}
			y = (3 * x_cur) + s1 + p;
			printf("y(%lf) = %lf\n", x_cur, y);
			x_cur += dx;
	}
	//	printf("Again?");
	//	scanf_s("%ñ",&check);
	//}while (check == 'y');
		system("pause");
	return 0;
}
