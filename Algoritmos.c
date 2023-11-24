#include <stdio.h>
#include <stdbool.h>


void bubblesort() {
	int num[] = { 5,2,3,1 }, aux, i, j;
	int n = sizeof(num) / sizeof(num[0]);

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				aux = num[j];
				num[j] = num[j + 1];
				num[j + 1] = aux;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", num[i]);
	}
}

int main() {
	
	bubblesort();
	return 0;
}