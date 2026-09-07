#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	while (i <= 100) {
		cout << i << " ";
		i++;
	}

	int j = 2;
	while (j <= 200) {
		cout << j << " ";
		j+=2;
	}

	int n;
	cout << "\nEnter amount of numbers: ";
	cin >> n;
	int sum = 0;
	int m = 0;
	while (m < n) {
		int num;
		cin >> num;
		if (num % 2 == 0) {
			sum += num;
		}
		m++;
	}
	cout << "Sum of even numbers: " << sum << endl;

	int totalHours = 0;
	for (int hour = 1; hour <= 12; hour++) {
		totalHours += hour;
	}
	cout << "Total hours: " << totalHours << endl;

	int sumNum = 0;
	cout << "Enter numbers to add them (0 - exit): ";
	int num;
	for (;;) {
		cin >> num;
		if (num == 0) {
			break;
		}
		sumNum += num;
	}
	cout << "Total sum: " << sumNum << endl;
}

