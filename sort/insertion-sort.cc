#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50 

void insertion_sort(int list[], int n)
{
	int key;
	int j,i;

	for (i=1; i<n; i++)
	{
		key = list[i];
		j = i-1;
		while (j >= 0 && list[j] > key)
		{
			list[j+1] = list[j];
			j = j-1;
			list[j+1] = key;	
		}	
	}
}

int main()
{
	int i;
	int list[MAX_SIZE];
	int n = MAX_SIZE;

	for (int i=0; i<n; i++)
	{
		list[i] = rand() % n;	
	}

	insertion_sort(list, n);

	for (int i=0; i<n; i++)
	{
		printf("%d\n", list[i]);
	}
}
