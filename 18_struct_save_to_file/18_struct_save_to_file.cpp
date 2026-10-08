#include <iostream>
#include <fstream>
using namespace std;

void ReadFromFile() {

}

int main()
{
	int size = 4;
	const int max_len = 100;

	ofstream out("shopping_list.txt");
	if (!out.is_open()) {
		cout << "Error: Failed to create or open file\n";
	}

	cout << "Enter 4 items for a shopping list:\n";
	for (int i = 0; i < size; i++)
	{
		char product[max_len];
		cin.getline(product, max_len);
		out << product << "\n";
	}

	out.close();

	cout << "Shopping list successfully saved to file\n";


}
