#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a, *suma,*n,*i;
	n = (int*)malloc(sizeof(int));
	suma = (int*)malloc(sizeof(int));
	i = (int*)malloc(sizeof(int));
	printf("Dati numaru de elemente : ");
	scanf("%d", n);
	a = (int*)malloc(sizeof(int) * (*n));	
	*suma = 0;
	for (*i = 0; *i < *n; (*i)++)
	{
		printf("a[%d]=", *i);
		scanf("%d", (a + *i));
		*suma = *suma + *(a + *i);
	}
	printf("Suma este : %d ", *suma);
	system("pause");
	return 0;

}