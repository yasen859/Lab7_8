#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	char c, v;
	printf("Введите номер месяца: ");
	printf("Год високосный?: '+' - да, '-' - нет\n");

	scanf_s("%c", &c);
	scanf_s("%c", &v);

	switch (c)

	{

	case '1':
	case '3':
	case '6':
	case '7':
	case '8':
	case '10':
	case '12':

		printf("31 день\n");

		break;

	case '2':
		switch (v) {
		case '-':
				printf("28 дней\n");
				break;
		
		case '+':
			printf("29 дней\n");
			break;

		}
			
		break;

	case '4':
	case '5':
	case '9':
	case '11':

		printf("30 дней\n");
		break;
	}

	return 0;
	system("pause");
}