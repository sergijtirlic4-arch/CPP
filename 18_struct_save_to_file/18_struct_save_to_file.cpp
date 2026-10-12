#include <iostream>
#include <fstream>
using namespace std;

void ReadFromFile() {
    ifstream list("shopping_list.txt");

    if (list.is_open())
    {
		cout << "\nYour shopping list:\n";
		char product[100];
		int count = 1;

        while (list.getline(product, 100))
        {
			cout << count << ". " << product << endl;
			count++;
        }
		list.close();
    }
    else
    {
        cout << "File not found" << endl;
    }
}

void ReadFromFile1() {
	ifstream num("numbers.txt");

	if (num.is_open()) {
		int number;
		int sum = 0;
		int count = 0;

		while (num >> number) {
			sum += number;
			count++;
		}

		num.close();

		if (count == 0) {
			cout << "Error" << endl;
		}
		else {
			cout << "Sum of all numbers: " << sum << endl;
		}
	}
	else {
		cout << "Error" << endl;
	}
}


int main()
{
	int size = 4;
	const int max_len = 100;

	ofstream list("shopping_list.txt");
	if (!list.is_open()) {
		cout << "Error\n";
		return 0;
	}

	cout << "Enter 4 items for a shopping list:\n";
	for (int i = 0; i < size; i++)
	{
		char product[max_len];
		cin.getline(product, max_len);
		list << product << "\n";
	}

	list.close();

	cout << "Shopping list successfully saved\n";

	ReadFromFile();



	ofstream num("numbers.txt");
	if (!num.is_open()) {
		cout << "Error\n";
	}

	cout << "Enter 3 numbers:\n";
	for (int i = 0; i < size - 1; i++)
	{
		int number;
		cin >> number;
		num << number << "\n";
	}
	num.close();
	cin.ignore();

	ReadFromFile1();
}
