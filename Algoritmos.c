#include <stdio.h>
#include <stdbool.h>


void bubbleSort() {
	int num[] = { 5,2,3,1 }, aux, i, j;
	int n = sizeof(num) / sizeof(num[0]);

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (num[j] > num[j + 1]) {
				aux = num[j];
				num[j] = num[j + 1];
				num[j + 1] = aux;
			}
		}
	}

	printf("Este eh o Bubble Sort funcionando: ");
	for (i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

}

void selectionSort() {
	int num[] = { 10,8,6,9,7 };
	int n = sizeof(num) / sizeof(num[0]), aux, i, j;

	for (i = 0; i < n - 1; i++) {
		int menor = i;
		for (j = i + 1; j < n; j++) {

			if (num[j] < num[menor]) {
				menor = j;
			}
		}
		if (menor != i) {
			aux = num[i];
			num[i] = num[menor];
			num[menor] = aux;
		}
	}

	printf("Este eh o Selection Sort funcionando: ");
	for (i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}

}

int main() {
	
	bubbleSort();
	selectionSort();
	return 0;
}