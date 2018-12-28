#include <iostream>

using namespace std;

void swap(int* a, int* b);

int main()
{
	int arr[15] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
	int min, temp;

	for(int i=0;i<14;i++)
	{
		min = i;
		for(int j=i+1;j<15;j++)
			if(arr[j] < arr[min])
				min = j;
		swap(arr[i], arr[min]);
	}

	for(int i=0;i<15;i++)
		cout << arr[i] << endl;

	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
