#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

void printStars(int n) {
    if (n <= 0) {
        return;
    }
    cout << "*";
    printStars(n - 1);
}

int sumRange(int a, int b) {
    if (a > b) {
        return 0;
    }
    return a + sumRange(a + 1, b);
}

int main() {
    int base = 2, exp = 3;
    cout << base << "^" << exp << " = " << power(base, exp) << endl;

    int starsCount;
    cout << "Enter number of stars: ";
    cin >> starsCount;
    printStars(starsCount);
    cout << endl;

    int start, end;
    cout << "Enter range (a and b): ";
    cin >> start >> end;
    cout << "Sum from " << start << " to " << end << " = " << sumRange(start, end) << endl;
}