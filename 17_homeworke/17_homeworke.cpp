#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int size = 5;
    string text;
    ofstream user_text("text.txt");

    if (!user_text.is_open())
    {
        cout << "Error" << endl;
        return 0;
    }

    for (int i = 1; i <= size; i++)
    {
        cout << "Enter string[" << i << "]: ";
        getline(cin, text);
        user_text << text << "\n";
    }
    user_text.close();



    string line;
    ifstream text_file("text.txt");

    if (text_file.is_open())
    {
        while (getline(text_file, line))
        {
            cout << line << endl;
        }
        text_file.close();
    }
    else
    {
        cout << "File not found" << endl;
    }
}