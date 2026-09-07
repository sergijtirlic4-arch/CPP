#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < i * n; j++) {
            cout << i << " ";
        }
    }
    cout << endl;



    int size = 10;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                cout << 0 << " ";
            }
            else {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }



    int total_sum = 0;
    for (int i = 10; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << i << " ";
            total_sum += i;
        }
    }
    cout << endl;
    cout << "Total sum: " << total_sum << endl;



    for (int i = 1; i <= 15; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 8; j++) {
                cout << i << " ";
            }
        }
        else {
            for (int j = 0; j < 10; j++) {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }



    for (int i = 1; i <= 30; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }
        else {
            for (int j = 0; j < 5; j++) {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }



    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }



    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    int count = 0;
    for (int i = a; i <= b; i++) {
        if (i % 12 == 0) {
            count++;
        }
    }
    cout << "Count: " << count << endl;

}
