#include <iostream>
using namespace std;

int main()
{
	{
		int counter = 14;
		while (counter < 124) {
			cout << counter << " ";
			counter++;
		}
		cout << endl;
	}

	{
		int counter = 1;
		while (counter < 100) {
			cout << counter << " ";
			counter += 2;
		}
		cout << endl;
	}

	{
		int count = 0;
		int N;
		int i = 1;
		int number;
		cout << "Amount of numbers: ";
		cin >> N;
		while (i <= N) {
			cin >> number;
			i++;
			if (number < 0) count++;
		}
		cout << "Amount of negative numbers: " << count << endl;
	}

	{
		int i = 1;
		double number;
		double product = 1;
		double sum = 0;
		while (i <= 8) {
			cout << "Enter number: ";
			cin >> number;
			product *= number;
			sum += number;
			i++;
		}
		cout << "Product: " << product << endl;
		cout << "Average: " << sum / 8 << endl;
	}

	{
		int counter = 100;
		do {
			if (counter % 2 != 0 || counter == 1) {
				cout << counter << " ";
			}
			counter--;
		} while (counter >= 1);
		cout << endl;
	}

	{
		int i = 1;
		double number;
		double product = 1;
		do {
			cout << "Enter number: ";
			cin >> number;
			product *= number;
			i++;
		} while (i <= 5);
		cout << "Product of 5 numbers: " << product << endl;
	}

	{
		int sum_while = 0;
		int i_while = 4;
		while (i_while < 50) {
			if (i_while % 4 == 0) {
				sum_while += i_while;
			}
			i_while++;
		}
		cout << "Sum (while): " << sum_while << endl;

		int sum_do = 0;
		int i_do = 4;
		do {
			if (i_do % 4 == 0) {
				sum_do += i_do;
			}
			i_do++;
		} while (i_do < 50);
		cout << "Sum (do while): " << sum_do << endl;
	}

	{
		int number;
		int i = 0;
		cout << "Enter a number: ";
		cin >> number;
		while (i <= number) {
			cout << i << " ";
			i++;
		}
		cout << endl;
	}

	{
		int start, end;
		cout << "Enter two limits: ";
		cin >> start >> end;
		if (start > end) {
			int temp = start;
			start = end;
			end = temp;
		}

		int i = start;
		cout << "Even numbers: ";
		while (i <= end) {
			if (i % 2 == 0) cout << i << " ";
			i++;
		}
		cout << endl;

		i = start;
		cout << "Odd numbers: ";
		while (i <= end) {
			if (i % 2 != 0) cout << i << " ";
			i++;
		}
		cout << endl;

		i = start;
		cout << "Multiples of 7: ";
		while (i <= end) {
			if (i % 7 == 0) cout << i << " ";
			i++;
		}
		cout << endl;
	}

	{
		int start, end;
		int sum = 0;
		cout << "Enter two limits: ";
		cin >> start >> end;
		if (start > end) {
			int temp = start;
			start = end;
			end = temp;
		}
		int i = start;
		while (i <= end) {
			sum += i;
			i++;
		}
		cout << "Total sum of range: " << sum << endl;
	}

	{
		int number;
		int sum = 0;
		do {
			cout << "Enter a number (0 to stop): ";
			cin >> number;
			sum += number;
		} while (number != 0);
		cout << "Final sum: " << sum << endl;
	}
}
