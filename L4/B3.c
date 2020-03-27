#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, *aux;
	aux = (int*)malloc(sizeof(int));
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	*aux = a;
	a = b;
	b = *aux;
	printf("Dupa interschimb\na=%d si b=%d\n", a, b);
	system("pause");
	return 0;
}