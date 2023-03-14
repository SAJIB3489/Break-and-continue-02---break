#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(int  argc, char** argv) {
	int num = 1;
	while (true)
	{
		printf("%d ", num);
		if (num % 7 == 0 && num % 5 == 0)
		{
			break;
		}

		num++;
	}
}