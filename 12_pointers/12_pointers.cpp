#include <iostream>
using namespace std;

int getProduct(int* pa, int* pb, int* pc) {
    return (*pa) * (*pb) * (*pc);
}

double getAverage(int* pa, int* pb, int* pc) {
    return (*pa + *pb + *pc) / 3.0;
}

int getMin(int* pa, int* pb, int* pc) {
    int min_v = *pa;
    if (*pb < min_v) min_v = *pb;
    if (*pc < min_v) min_v = *pc;
    return min_v;
}

void fillArray(int* p, int size) {
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element [" << i << "]: ";
        cin >> *(p + i);
    }
}

void printDirect(int* p, int size) {
    cout << endl << "Direct order:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

void printReverse(int* p, int size) {
    cout << "Reverse order:" << endl;
    for (int i = size - 1; i >= 0; --i) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

int calculateSum(int* p, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *(p + i);
    }
    return sum;
}

int main() {
    int a, b, c;
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    cout << "Enter three numbers: ";
    cin >> *pa >> *pb >> *pc;

    cout << endl << "Product: " << getProduct(pa, pb, pc) << endl;
    cout << "Average: " << getAverage(pa, pb, pc) << endl;
    cout << "Minimum: " << getMin(pa, pb, pc) << endl << endl;

    const int size = 5;
    int arr[size];
    int* p = arr;

    fillArray(p, size);
    printDirect(p, size);
    printReverse(p, size);

    cout << endl << "Sum of elements: " << calculateSum(p, size) << endl;

}
