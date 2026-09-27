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

void BubbleSort(int arr[], int first, int last)
{
	int temp;
	for (int i = first + 1; i < last - 1; i++)
	{
		for (int j = last - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void LinearSearch(int arr[], int size)
{
	int first_negative = -1;
	int last_negative = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			first_negative = i;
			break;
		}
	}
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] < 0) {
			last_negative = i;
			break;
		}
	}
	if (first_negative != -1 && last_negative != -1 && (last_negative - first_negative) > 1) {
		BubbleSort(arr, first_negative, last_negative);
	}
	else {
		cout << "Error";
	}
}

int main()
{
	srand(time(0));

	const int size = 10;
	int arr[size]{};
	InitArray(arr, size);
	ShowArray(arr, size);
	LinearSearch(arr, size);
	ShowArray(arr, size);
}
