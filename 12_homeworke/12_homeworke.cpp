#include <iostream>
using namespace std;

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;
	}
}

void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void SwapMinMax(int arr[], int size)
{
	int* min_ptr = arr;
	int* max_ptr = arr;

	for (int i = 1; i < size; i++)
	{
		if (*(arr + i) < *min_ptr) {
			min_ptr = arr + i;
		}
		if (*(arr + i) > *max_ptr) {
			max_ptr = arr + i;
		}
	}

	int temp = *min_ptr;
	*min_ptr = *max_ptr;
	*max_ptr = temp;
}

void SwapPairs(int arr[], int size)
{
	for (int i = 0; i < size - 1; i += 2)
	{
		int* p1 = arr + i;
		int* p2 = arr + i + 1;
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
}

int main()
{
	srand(time(0));

	const int size = 10;
	int arr[size]{};

	InitArray(arr, size);
	ShowArray(arr, size);
	SwapMinMax(arr, size);
	ShowArray(arr, size);
	SwapPairs(arr, size);
	ShowArray(arr, size);
}