#include <iostream>
using namespace std;

int main()
{
	double profit[12];
	for (int i = 0; i < 12; i++) {
		cout << "Enter profit for month " << i + 1 << ": ";
		cin >> profit[i];
	}

	int start, end;
	cout << "Enter range (start and end month): ";
	cin >> start >> end;

	int min_month = start - 1;
	int max_month = start - 1;

	for (int i = start - 1; i <= end - 1; i++) {
		if (profit[i] < profit[min_month]) {
			min_month = i;
		}
		if (profit[i] > profit[max_month]) {
			max_month = i;
		}
	}

	cout << "Min profit month in range: " << min_month + 1 << endl;
	cout << "Max profit month in range: " << max_month + 1 << endl;
}
