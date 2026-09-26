#include <iostream>
using namespace std;

int main() {
    int* dynamicInt = new int;
    double* dynamicDouble = new double;
    float* dynamicFloat = new float;

    *dynamicInt = 5;
    *dynamicDouble = 4.5;
    *dynamicFloat = 2.5f;

    double product = (*dynamicInt) * (*dynamicDouble) * (*dynamicFloat);

    cout << "Integer (int): " << *dynamicInt << endl;
    cout << "Double (double): " << *dynamicDouble << endl;
    cout << "Float (float): " << *dynamicFloat << endl;

    cout << "Product: " << product << endl;

    delete dynamicInt;
    delete dynamicDouble;
    delete dynamicFloat;

    dynamicInt = nullptr;
    dynamicDouble = nullptr;
    dynamicFloat = nullptr;
}
