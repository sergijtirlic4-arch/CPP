#include <iostream>
using namespace std;

int main()
{
    const float inch = 2.54;
    int diagonal_in_inch;
    cout << "Enter diagonal of your TV(inch): ";
    cin >> diagonal_in_inch;
    float diagonal_in_cm = inch * diagonal_in_inch;
    cout << "Your TV diagonal in cm: " << diagonal_in_cm;




}
