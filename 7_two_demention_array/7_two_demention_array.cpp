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



        double product = 1.0;
        bool has_positive = false;
        const int rows5 = 5;
        const int cols5 = 4;
        double array5[rows5][cols5]{};

        for (int i = 0; i < rows5; i++)
        {
            for (int j = 0; j < cols5; j++)
            {
                array5[i][j] = -5 + rand() % 11;
            }
        }

        for (int i = 0; i < rows5; i++)
        {
            for (int j = 0; j < cols5; j++)
            {
                cout << left << setw(5) << array5[i][j];
                if (array5[i][j] > 0)
                {
                    product *= array5[i][j];
                    has_positive = true;
                }
            }
            cout << endl;
        }
        if (!has_positive) product = 0.0;
        cout << "Product of positive elements: " << product << "\n" << endl;



        double product1 = 1.0;
        bool has_negative = false;
        const int rows6 = 5;
        const int cols6 = 4;
        double array6[rows6][cols6]{};

        for (int i = 0; i < rows6; i++)
        {
            for (int j = 0; j < cols6; j++)
            {
                array6[i][j] = -5 + rand() % 11;
            }
        }

        for (int i = 0; i < rows6; i++)
        {
            for (int j = 0; j < cols6; j++)
            {
                cout << left << setw(5) << array6[i][j];
                if (array6[i][j] < 0)
                {
                    product1 *= array6[i][j];
                    has_negative = true;
                }
            }
            cout << endl;
        }
        if (!has_negative) product1 = 0.0;
        cout << "Product of negative elements: " << product1 << "\n" << endl;



        int count7 = 0;
        const int rows7 = 4;
        const int cols7 = 4;
        int array7[rows7][cols7]{};

        for (int i = 0; i < rows7; i++)
        {
            for (int j = 0; j < cols7; j++)
            {
                array7[i][j] = rand() % 51;
            }
        }

        for (int i = 0; i < rows7; i++)
        {
            for (int j = 0; j < cols7; j++)
            {
                cout << left << setw(5) << array7[i][j];
                if (array7[i][j] % 6 == 1)
                {
                    count7++;
                }
            }
            cout << endl;
        }
        cout << "Count of elements with remainder 1 when divided by 6: " << count7 << "\n" << endl;



        const int rows8 = 5;
        const int cols8 = 6;
        int array8[rows8][cols8]{};

        for (int i = 0; i < rows8; i++)
        {
            for (int j = 0; j < cols8; j++)
            {
                array8[i][j] = -50 + rand() % 101;
            }
        }

        int min_element = array8[0][0];

        for (int i = 0; i < rows8; i++)
        {
            for (int j = 0; j < cols8; j++)
            {
                cout << left << setw(5) << array8[i][j];
                if (array8[i][j] < min_element)
                {
                    min_element = array8[i][j];
                }
            }
            cout << endl;
        }
        cout << "Min element: " << min_element << "\n" << endl;



        const int rows9 = 5;
        const int cols9 = 6;
        int array9[rows9][cols9]{};

        for (int i = 0; i < rows9; i++)
        {
            for (int j = 0; j < cols9; j++)
            {
                array9[i][j] = -50 + rand() % 101;
            }
        }

        int max_element = array9[0][0];

        for (int i = 0; i < rows9; i++)
        {
            for (int j = 0; j < cols9; j++)
            {
                cout << left << setw(5) << array9[i][j];
                if (array9[i][j] > max_element)
                {
                    max_element = array9[i][j];
                }
            }
            cout << endl;
        }
        cout << "Max element: " << max_element << "\n" << endl;



        double sum10 = 0.0;
        const int rows10 = 5;
        const int cols10 = 4;
        double array10[rows10][cols10]{};

        for (int i = 0; i < rows10; i++)
        {
            for (int j = 0; j < cols10; j++)
            {
                array10[i][j] = -5 + rand() % 11;
            }
        }

        for (int i = 0; i < rows10; i++)
        {
            for (int j = 0; j < cols10; j++)
            {
                cout << left << setw(5) << array10[i][j];
                if (array10[i][j] < 0)
                {
                    sum10 += array10[i][j];
                }
            }
            cout << endl;
        }
        cout << "Sum of negative elements: " << sum10 << "\n" << endl;
}
