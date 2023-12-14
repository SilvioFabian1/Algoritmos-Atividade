#include <stdio.h>
#include <stdbool.h>

#define CAPACIDADE 10

void bubbleSort() {
	int num[] = { 5,2,3,1,4 }, aux, i, j;
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
	printf("\n");
}

void insertionsort() {
	int num[] = { 11,12,13,14,15 };
	int n = sizeof(num) / sizeof(num[0]), i, j, chave;

	for (i = 1; i < n; i++) {
		chave = num[i];
		j = i - 1;
		while (j >= 0 && num[j] > chave) {
			num[j + 1] = num[j];
			j--;
		}
		num[j + 1] = chave;
	}

	printf("Este eh o Insertion Sort funcionando: ");
	for (i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
}

//////////////////// Pilha //////////////////////////////////

# define MAXSIZE 6

int items[MAXSIZE];
int top = -1;

int isEmpty() {
	return top == -1;
}

int isFull() {
	return top == MAXSIZE - 1;
}

void push(int data) {
	if (isFull()) {
		printf("A pilha está cheia!\n");
		return;
	}

	items[++top] = data;
}

int pop() {
	if (isEmpty()) {
		printf("A pilha está vazia!\n");
		return -1;
	}

	return items[top--];
}

int peek() {
	if (isEmpty()) {
		printf("A pilha está vazia!\n");
		return -1;
	}

	return items[top];
}


////////////////// FILA /////////////////////////////////

int iterms[MAXSIZE];
int front = -1;
int rear = -1;

int isEmptyy() {
	return front == -1 && rear == -1;
}

int isFulll() {
	return rear == MAXSIZE - 1;
}

void enqueue(int data) {
	if (isFulll()) {
		printf("A fila está cheia!\n");
		return;
	}
	if (isEmptyy()) {
		front = rear = 0;
	}
	else {
		rear++;
	}
	iterms[rear] = data;
}

int dequeue() {
	if (isEmptyy()) {
		printf("A fila está vazia!\n");
		return -1;
	}
	int data = iterms[front];
	if (front == rear) {
		front = rear = -1;
	}
	else {
		front++;
	}
	return data;
}

void display() {
	if (isEmptyy()) {
		printf("A fila está vazia!\n");
		return;
	}
	for (int i = front; i <= rear; i++) {
		printf("%d\n", iterms[i]);
	}
}


int main() {
	
	bubbleSort();
	selectionSort();
	insertionsort();

	////////// Pilha //////////////

	push(64);
	push(25);
	push(12);
	push(22);
	push(11);
	push(9);

	printf("Elemento no topo da pilha: %d\n", peek());
	printf("Elemento removido da pilha: %d\n", pop());
	printf("Elemento no topo da pilha: %d\n", peek());

	///////////////////// FILA ///////////////////////

	enqueue(64);
	enqueue(25);
	enqueue(12);
	enqueue(22);
	enqueue(11);
	enqueue(9);

	printf("Desafileirando...\n");
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());
	printf("\nO que sobrou foi: ");

	display();

	return 0;
}