#include <iostream>
using namespace std;

void rectangle(int N, int K) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
}

int factorial(int n) {
    if (n < 0) return 0;
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void coutMinMax(const int arr[], int size) {
    if (size <= 0) return;

    int minVal = arr[0];
    int minIdx = 0;
    int maxVal = arr[0];
    int maxIdx = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }

    cout << "Minimum value: " << minVal << " at index " << minIdx << "\n";
    cout << "Maximum value: " << maxVal << " at index " << maxIdx << "\n";
}

int cube(int num) {
    return num * num * num;
}

bool isPositive(int num) {
    return num > 0;
}

int main() {
    srand(time(0));

    cout << "Rectangle:" << "\n";
    rectangle(3, 5);
    cout << "\n";

    cout << "Factorial of number: " << factorial(5) << "\n\n";

    int number = 4;
    cout << "Is " << number << " prime? " << (isPrime(number) ? "Yes" : "No") << "\n\n";

    int arr[10];
    int size = 10;
    cout << "Generated array: ";
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    cout << "\n";

    coutMinMax(arr, size);
    cout << "\n";

    cout << "Cube of number: " << cube(4) << "\n\n";

    int num = 4;
    cout << "Is " << num << " positive? " << (isPositive(num) ? "True" : "False") << "\n";
}