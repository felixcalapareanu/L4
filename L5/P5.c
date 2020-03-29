#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50

int stack1[MAX_SIZE], stack2[MAX_SIZE], top1=-1, top2=-1;

void push1(int nr)
{
	if (top1 == MAX_SIZE - 1)
	{
		printf("\nEroare : Stiva este plina\n ");
		return;
	}
	stack1[++top1] = nr;
}
void pop1()
{
	if (top1 == -1)
	{
		printf("\nEroare : stiva este goala\n");
		return;
	}
	top1--;
}
void push2(int nr)
{
	if (top2 == MAX_SIZE - 1)
	{
		printf("\nEroare : Stiva este plina\n ");
		return;
	}
	stack2[++top2] = nr;
}
void pop2()
{
	if (top2 == -1)
	{
		printf("\nEroare : stiva este goala\n");
		return;
	}
	top2--;
}
int binar(int nr)
{
	int k = 0, binary[10],i,baza2=0;
	while (nr > 0)
	{
		binary[k] = nr % 2;
		nr = nr / 2;
		k++;
	}
	for (i = k - 1; i >= 0; i--)
		baza2 = baza2 * 10 + binary[i];
	return baza2;
}

int prim(int nr)
{
	int i;
	if (nr == 1)
		return 0;
	for (i = 2; i <= nr/2; i++)
		if (nr%i == 0)
			return 0;
	return 1;
}
int main()
{
	int i,aux[50],k=0;
	for (i = 1; i <= 50; i++)
		push1(i);
	while (top1 != -1)
	{
		if (prim(stack1[top1]) == 1)
			push2(binar(stack1[top1]));
		else
			aux[k++] = stack1[top1];
		pop1();
	}
	for (i = k - 1; i >= 0; i--)
		push1(aux[i]);
	for (i = 0; i <= top1; i++)
		printf("%d ", stack1[i]);
	printf("\n");
	for (i = 0; i <= top2; i++)
		printf("%d ", stack2[i]);
	printf("\n");
	system("pause");
	return 0;
}