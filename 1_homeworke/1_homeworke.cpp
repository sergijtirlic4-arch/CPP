#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    float sum = num1 + num2 + num3;
    cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Sum: " << sum << endl;

    float avg1, avg2;
    cout << "Enter two numbers for average: ";
    cin >> avg1 >> avg2;
    float average = (avg1 + avg2) / 2;
    cout << "Average: " << average << endl;

    float kilometers;
    cout << "Enter distance in kilometers: ";
    cin >> kilometers;
    float meters = kilometers * 1000;
    cout << "Distance in meters: " << meters << endl;

    const float price1 = 10.50;
    const float price2 = 5.25;
    const float price3 = 20;
    const float price4 = 3.75;
    int qty1, qty2, qty3, qty4;
    cout << "Enter quantity for item 1: ";
    cin >> qty1;
    cout << "Enter quantity for item 2: ";
    cin >> qty2;
    cout << "Enter quantity for item 3: ";
    cin >> qty3;
    cout << "Enter quantity for item 4: ";
    cin >> qty4;
    float totalCost = (price1 * qty1) + (price2 * qty2) + (price3 * qty3) + (price4 * qty4);
    cout << "Total cost: " << totalCost << endl;

}


