#include <iostream>
using namespace std;

int* InitArray(int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;
	}
	return arr;
}

void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int* AppendElement(int* arr, int& size, int element)
{
	int* temp = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = element;

	size++;
	delete[] arr;
	return temp;
}

int* PopBack(int* arr, int& size)
{
	if (size <= 0)
	{
		cout << "Array is empty" << endl;
		return arr;
	}

	int* temp = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}

	size--;
	delete[] arr;
	return temp;
}

int* RemoveAtIndex(int* arr, int& size, int index)
{
	if (index < 0 || index >= size)
	{
		cout << "Invalid index" << endl;
		return arr;
	}

	int* temp = new int[size - 1];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = index + 1; i < size; i++)
	{
		temp[i - 1] = arr[i];
	}

	size--;
	delete[] arr;
	return temp;
}

int* InsertAtIndex(int* arr, int& size, int index, int element)
{
	if (index < 0 || index > size)
	{
		cout << "Invalid index" << endl;
		return arr;
	}

	int* temp = new int[size + 1];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	temp[index] = element;
	for (int i = index; i < size; i++)
	{
		temp[i + 1] = arr[i];
	}

	size++;
	delete[] arr;
	return temp;
}

int main()
{
	srand(time(0));

	int size = 0;
	cout << "Enter size: ";
	cin >> size;

	int* arr = InitArray(size);

	int choice;
	do
	{
		cout << "\nArray: ";
		ShowArray(arr, size);
		cout << "1 - Append, 2 - Pop Back, 3 - Delete at index, 4 - Insert at index, 0 - Exit" << endl;
		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			int el;
			cout << "Enter element: ";
			cin >> el;
			arr = AppendElement(arr, size, el);
			break;
		}
		case 2:
		{
			arr = PopBack(arr, size);
			break;
		}
		case 3:
		{
			int idx;
			cout << "Enter index: ";
			cin >> idx;
			arr = RemoveAtIndex(arr, size, idx);
			break;
		}
		case 4:
		{
			int idx, el;
			cout << "Enter index: ";
			cin >> idx;
			cout << "Enter element: ";
			cin >> el;
			arr = InsertAtIndex(arr, size, idx, el);
			break;
		}
		}

	} while (choice != 0);

	delete[] arr;
}