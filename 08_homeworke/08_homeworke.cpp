#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return days[month - 1];
}

int dateToDays(int day, int month, int year) {
    int totalDays = day;

    for (int y = 1; y < year; ++y) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    for (int m = 1; m < month; ++m) {
        totalDays += getDaysInMonth(m, year);
    }

    return totalDays;
}

int daysBetweenDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    int days1 = dateToDays(d1, m1, y1);
    int days2 = dateToDays(d2, m2, y2);
    int diff = days1 - days2;

    if (diff < 0) {
        return abs(diff);
    }
    return diff;
}

void initArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 - 50;
    }
}

void showArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double average(int arr[], int size) {
    double arrSum = 0;
    for (int i = 0; i < size; i++)
    {
        arrSum += arr[i];
    }
    return arrSum / size;
}

void count(int arr[], int size) {
    int count_positiv = 0;
    int count_negativ = 0;
    int count_null = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0) {
            count_positiv++;
        }
        else if (arr[i] < 0) {
            count_negativ++;
        }
        if (arr[i] == 0){
            count_null++;
        }
    }
    cout << count_positiv << " " << count_negativ << " " << count_null;
}

int main() {
    {
        srand(time(0));

        int d1 = 1, m1 = 1, y1 = 2024;
        int d2 = 1, m2 = 1, y2 = 2025;

        int result = daysBetweenDates(d1, m1, y1, d2, m2, y2);

        cout << "Difference between dates: " << result << " days." << endl;
    }



    {
        const int size = 10;
        int arr[size]{};
        initArray(arr, size);
        showArray(arr, size);
        double result = average(arr, size);
        cout << "Average: " << result << endl;
    }


    {
        const int size = 10;
        int arr[size]{};
        initArray(arr, size);
        showArray(arr, size);
        count(arr, size);
    }
}
