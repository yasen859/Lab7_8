#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int N;
	double product = 1.0;
	printf("Введите целое число N:");
	scanf_s("%d", &N);
	for (int i = 1; i <= N; i++) {
		product *= (1 + i / 10.0); 
		
	}
	printf("Произведение 1.1 * 1.2 *... * 1.%d =%.6lf\n", N, product);
	return 0;
}