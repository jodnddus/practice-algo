#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int list[], int n)
{
	int swapped = 0;
	do
	{
		swapped = 0;
		for (int i=0; i<n-1; i++)
		{
			if (list[i] > list[i+1])
			{
				swap(&list[i], &list[i+1]);
				swapped = 1;
			}
		}
	} while(swapped);	
}

int main()
{
	int n = 10000;
	int list[n];

	for (int i=0;i<n;i++)
		list[i] = rand() % n;

	bubble_sort(list, n);

	for (int i=0;i<n;i++)
		printf("%d\n", list[i]);
}
