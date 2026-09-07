#include <iostream>
using namespace std;

int main() {
    int side1, side2;
    cout << "Enter rectangle sides: ";
    cin >> side1 >> side2;
    if (side1 == side2) {
        cout << "It is a square" << endl;
    }
    else {
        cout << "It is not a square" << endl;
    }



    int age;
    cout << "Enter child age: ";
    cin >> age;
    if (age >= 1 && age <= 2) {
        cout << "Nursery" << endl;
    }
    else if (age >= 3 && age <= 5) {
        cout << "Kindergarten" << endl;
    }
    else if (age >= 6 && age <= 17) {
        cout << "School" << endl;
    }
    else if (age >= 18 && age <= 120) {
        cout << "University or adult" << endl;
    }
    else {
        cout << "Error age" << endl;
    }



    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    int negativeCount = 0;
    if (n1 < 0) negativeCount++;
    if (n2 < 0) negativeCount++;
    if (n3 < 0) negativeCount++;
    if (negativeCount == 2) {
        cout << "Exactly two numbers are negative" << endl;
    }
    else {
        cout << "Not exactly two numbers are negative" << endl;
    }



    double rangeNum;
    cout << "Enter a number: ";
    cin >> rangeNum;
    if ((rangeNum >= 2 && rangeNum <= 5) || (rangeNum >= -1 && rangeNum <= 1)) {
        cout << "Belongs to the intervals" << endl;
    }
    else {
        cout << "Does not belong to the intervals" << endl;
    }



    double eq1, eq2, eq3;
    cout << "Enter three numbers: ";
    cin >> eq1 >> eq2 >> eq3;
    if ((eq1 == eq2 && eq1 != eq3) || (eq1 == eq3 && eq1 != eq2) || (eq2 == eq3 && eq2 != eq1)) {
        cout << "Exactly two numbers are equal" << endl;
    }
    else {
        cout << "Not exactly two numbers are equal" << endl;
    }



    int o1, o2, o3;
    cout << "Enter three integers: ";
    cin >> o1 >> o2 >> o3;
    if (o1 % 2 != 0 && o2 % 2 != 0 && o3 % 2 != 0) {
        cout << "All numbers are odd" << endl;
    }
    else {
        cout << "Not all numbers are odd" << endl;
    }



    double swap1, swap2;
    cout << "Enter two numbers: ";
    cin >> swap1 >> swap2;
    if (swap1 != swap2) {
        double temp = swap1;
        swap1 = swap2;
        swap2 = temp;
    }
    cout << "Numbers: " << swap1 << " and " << swap2 << endl;



    int a;
    cout << "Enter a three-digit integer (100 < a < 999): ";
    cin >> a;
    int digit1 = a / 100;
    int digit2 = (a / 10) % 10;
    int digit3 = a % 10;
    int digitsCount = 3;
    int digitsSum = digit1 + digit2 + digit3;
    cout << "Count: " << digitsCount << endl;
    cout << "Sum: " << digitsSum << endl;
    cout << digit1 << "  " << digit3 << endl;



    int hours, minutes, seconds;
    cout << "Enter hours, minutes, seconds: ";
    cin >> hours >> minutes >> seconds;
    if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60) {
        cout << "Valid time" << endl;
    }
    else {
        cout << "Invalid time" << endl;
    }



    int greetingHour;
    cout << "Enter hour (0-23): ";
    cin >> greetingHour;
    if (greetingHour >= 5 && greetingHour < 12) {
        cout << "good morning" << endl;
    }
    else if (greetingHour >= 12 && greetingHour < 18) {
        cout << "good day" << endl;
    }
    else if (greetingHour >= 18 && greetingHour < 22) {
        cout << "good evening" << endl;
    }
    else if ((greetingHour >= 22 && greetingHour < 24) || (greetingHour >= 0 && greetingHour < 5)) {
        cout << "good night" << endl;
    }
    else {
        cout << "Invalid hour" << endl;
    }



    double min1, min2, min3;
    cout << "Enter three numbers: ";
    cin >> min1 >> min2 >> min3;
    double minimum = min1;
    if (min2 < minimum) {
        minimum = min2;
    }
    if (min3 < minimum) {
        minimum = min3;
    }
    cout << "Minimum: " << minimum << endl;

}
