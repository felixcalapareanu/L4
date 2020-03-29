#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 8

int stack[MAX_SIZE], top = -1,binary[MAX_SIZE], k;

void DecimalToBinary( int nr)
{
	int i;
	k = 0;
	for (i = 0; i < MAX_SIZE; i++)
		binary[i] = 0;
	while (nr > 0)
	{
		binary[k] = nr % 2;
		nr = nr / 2;
		k++;
	}
	
}
void BinaryInverse( int nr)
{
	nr = nr ^ 255;
	DecimalToBinary(nr);
}

void push( int nr)
{
	if (top == MAX_SIZE - 1)
	{
		printf("\nEroare : Stiva este plina\n ");
		return;
	}
	stack[++top] = nr;
}

void pop()
{
	if (top == -1)
	{
		printf("\nEroare : stiva este goala\n");
		return;
	}
	top--;
}
int main()
{
	int N,i,j,x;
	printf("Numaru de elemente : ");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("Dati elementu nr %d : ", i + 1);
		scanf("%d", &x);
		DecimalToBinary(x);
		printf("Forma binara : ");
		for (j = 7; j >= 0; j--)
			printf("%d", binary[j]);
		printf("\n");
		BinaryInverse(x);
		for (j = 0; j <= 7; j++)
			push(binary[j]);
		printf("Forma binara inversata : ");
		while (top != -1)
		{
			printf("%d", stack[top]);
			pop();
		}
		printf("\n");
	}
	system("pause");
	return 0;
}