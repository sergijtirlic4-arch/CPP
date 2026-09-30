#include <iostream>
using namespace std;

int FindLen(const char user_string[]) {
	int user_string_len = 0;
	while (user_string[user_string_len] != '\0') {
		user_string_len++;
	}
	return user_string_len;
}

int main()
{
	char a_or_o[] = {"AoPoa1aa aOppp1Ppoa1"};

	int a = 0;
	int o = 0;

	for (int i = 0; i < sizeof(a_or_o); i++)
	{
		if (a_or_o[i] == 'a' || a_or_o[i] == 'A') {
			a++;
		}
		else if (a_or_o[i] == 'o' || a_or_o[i] == 'O') {
			o++;
		}
	}

	if (a > o) {
		cout << "There are more letters 'a'" << endl;
	}
	else if (o > a) {
		cout << "There are more letters 'o'" << endl;
	}
	else {
		cout << "The amount of 'a' and 'o' is equal" << endl;
	}



	int letters = 0;
	int digits = 0;
	int spaces = 0;
	for (int i = 0; i < sizeof(a_or_o); i++)
	{
		if (isalpha(a_or_o[i])) {
			letters++;
		}
		else if (isdigit(a_or_o[i])) {
			digits++;
		}
		else if (isspace(a_or_o[i])) {
			spaces++;
		}
	}
	cout << "Amount of letters: " << letters << endl;
	cout << "Amount of digits: " << digits << endl;
	cout << "Amount of spaces: " << spaces << endl;



	for (int i = 0; i < sizeof(a_or_o); i++)
	{
		if (isupper(a_or_o[i])) {
			a_or_o[i] = tolower(a_or_o[i]);
		}
		else if (islower(a_or_o[i])) {
			a_or_o[i] = toupper(a_or_o[i]);
		}
	}

	cout << a_or_o << endl;



	const int size = 100;
	char user_string[size]{};
	cout << "Enter a string: ";
	cin.getline(user_string, size);
	int result = FindLen(user_string);
	cout << "Length of your string: " << result << endl;
}
