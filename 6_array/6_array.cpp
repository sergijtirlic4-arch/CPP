#include <iostream>
using namespace std;

int main()
{
	//int product = 1;
	//const int size = 10;
	//int array[size]{};
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "Enter number " << i << ": ";
	//	cin >> array[i];
	//}
	//for (int j = 0; j < size; j++)
	//{
	//	cout << array[j] << " ";
	//	product *= array[j];
	//}
	//cout << endl;
	//cout << "Product of all numbers: " << product;



	const int size0 = 7;
	int array0[size0]{-1, 2, 4, 6, -3, 5, -9};
	int positiv = 0;
	int negativ = 0;
	for (int i = 0; i < size0; i++)
	{
		if (array0[i] > 0) {
			positiv += 1;
		}
		else if (array0[i] < 0) {
			negativ += 1;
		}
	}
	for (int i = 0; i < size0; i++)
	{
		cout << array0[i] << " ";
	}
	cout << endl;
	cout << "Amount of positiv numbers: " << positiv << endl;
	cout << "Amount of negativ numbers: " << negativ << endl;



	const int size3 = 7;
	long array3[size3]{ 12, -5, 8, 14, 3, 22, -6 }; 
	long even_sum = 0;

	cout << "Array of longs: "
;	for (int i = 0; i < size3; i++)
	{
		cout << array3[i] << " ";
		if (array3[i] % 2 == 0) {
			even_sum += array3[i];
		}
	}
	cout << endl << "Sum of even elements: " << even_sum << endl;



	const int size4 = 10;
	int array4[size4]{};
	int value = 2;
	for (int i = 0; i < size4; i++)
	{
		array4[i] = value;
		value *= 2;
	}
	for (int j = 0; j < size4; j++)
	{
		cout << array4[j] << " ";
	}
	cout << endl;
	for (int m = 9; m >= 0; m--)
	{
		cout << array4[m] << " ";
	}
	cout << endl;



	const int size5 = 10;
	int array5[size5]{-2, 3, -3, 8, 1, -6, 0, 2, -9, 5};
	for (int i = 0; i < size5; i++)
	{
		if (array5[i] < 0) {
			array5[i] = array5[i] * -1;
		} 
	}
	for (int j = 0; j < size5; j++)
	{
		cout << array5[j] << " ";
	}
	cout << endl;
}
