#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	srand(time(0));

    int count = 0;
    const int rows = 3;
    const int cols = 4;
    int array[rows][cols]{};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << left << setw(3) << array[i][j] << " ";
            if (array[i][j] != 0)
            {
                count++;
            }
        }
        cout << endl;
    }
        cout << "Amount of numbers(without 0): " << count << endl;
        cout << endl;



        int count2 = 0;
        const int rows2 = 3;
        const int cols2 = 3;
        int array2[rows2][cols2]{};

        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                array2[i][j] = rand() % 5;
            }
        }

        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                cout << left << setw(4) << array2[i][j];
                if (array2[i][j] == 0)
                {
                    count2++;
                }
            }
            cout << endl;
        }
        cout << "Amount of elements equal to zero: " << count2 << "\n" << endl;



        int count3 = 0;
        const int rows3 = 7;
        const int cols3 = 3;
        int array3[rows3][cols3]{};

        for (int i = 0; i < rows3; i++)
        {
            for (int j = 0; j < cols3; j++)
            {
                array3[i][j] = -20 + rand() % 41;
            }
        }

        for (int i = 0; i < rows3; i++)
        {
            for (int j = 0; j < cols3; j++)
            {
                cout << left << setw(5) << array3[i][j];
                if (abs(array3[i][j]) < 12)
                {
                    count3++;
                }
            }
            cout << endl;
        }
        cout << "Amount of elements with absolute value less than 12: " << count3 << "\n" << endl;



        int count4 = 0;
        const int rows4 = 4;
        const int cols4 = 5;
        int array4[rows4][cols4]{};

        for (int i = 0; i < rows4; i++)
        {
            for (int j = 0; j < cols4; j++)
            {
                array4[i][j] = -50 + rand() % 101;
            }
        }

        for (int i = 0; i < rows4; i++)
        {
            for (int j = 0; j < cols4; j++)
            {
                cout << left << setw(5) << array4[i][j];
                if (array4[i][j] > 0)
                {
                    count4++;
                }
            }
            cout << endl;
        }
        cout << "Amount of positive elements: " << count4 << "\n" << endl;
}
