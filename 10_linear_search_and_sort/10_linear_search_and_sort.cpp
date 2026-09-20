#include <iostream>
using namespace std;


void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
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

void BubbleSort(int arr[], int size, int das = 1)
{
	if (das == 0)
	{
		int temp;
		for (int i = 0; i < size; i++)
		{
			for (int j = size - 1; j > i; j--)
			{
				if (arr[j - 1] > arr[j]) {
					temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	else if (das == 1)
	{
		int temp;
		for (int i = 0; i < size; i++)
		{
			for (int j = size - 1; j > i; j--)
			{
				if (arr[j - 1] < arr[j]) {
					temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
}

int main()
{
	srand(time(0));
	const int size = 10;
	int arr[size];
	int search_num, index_find;
	InitArray(arr, size);
	ShowArray(arr, size);
	BubbleSort(arr, size);
	ShowArray(arr, size);
}
