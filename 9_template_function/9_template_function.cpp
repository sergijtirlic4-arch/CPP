#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

float max(float a, float b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int max(int a, int b, int c) {
    int max_two = (a > b) ? a : b;
    return (max_two > c) ? max_two : c;
}

float max(float a, float b, float c) {
    float max_two = (a > b) ? a : b;
    return (max_two > c) ? max_two : c;
}

double max(double a, double b, double c) {
    double max_two = (a > b) ? a : b;
    return (max_two > c) ? max_two : c;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

float min(float a, float b) {
    return (a < b) ? a : b;
}

double min(double a, double b) {
    return (a < b) ? a : b;
}

int min(int a, int b, int c) {
    int min_two = (a < b) ? a : b;
    return (min_two < c) ? min_two : c;
}

float min(float a, float b, float c) {
    float min_two = (a < b) ? a : b;
    return (min_two < c) ? min_two : c;
}

double min(double a, double b, double c) {
    double min_two = (a < b) ? a : b;
    return (min_two < c) ? min_two : c;
}


template <typename T>
void fill_array(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = (rand() % 100);
    }
}

template <typename T>
void fill_matrix(T matrix[][4], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = (rand() % 100);
        }
    }
}

template <typename T>
void print_array(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
void print_matrix(T matrix[][4], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

template <typename T>
double average(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

template <typename T>
T max_array(T arr[], int size) {
    T max_val = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

template <typename T>
T max_matrix(T matrix[][4], int rows, int cols) {
    T max_val = matrix[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
            }
        }
    }
    return max_val;
}

int main() {
    srand(time(0));

    cout << "Max 2 (int, float, double): " << max(10, 20) << ", " << max(5.5f, 2.3f) << ", " << max(10.5, 20.7) << endl;
    cout << "Max 3 (int, float, double): " << max(10, 30, 20) << ", " << max(1.1f, 5.5f, 3.3f) << ", " << max(10.5, 30.2, 20.1) << endl;
    cout << "Min 2 (int, float, double): " << min(15, 5) << ", " << min(5.5f, 2.3f) << ", " << min(10.5, 20.7) << endl;
    cout << "Min 3 (int, float, double): " << min(10, 2, 8) << ", " << min(4.4f, 1.1f, 9.9f) << ", " << min(10.5, 2.2, 8.8) << endl;
    cout << endl;

    const int size_i = 6;
    int rows = 3;
    int cols = 4;
    int i_arr[size_i];
    double d_arr[4];
    int matrix[3][4];

    fill_array(i_arr, 5);
    fill_array(d_arr, 4);
    fill_matrix(matrix, rows, cols);

    cout << "Int array: ";
    print_array(i_arr, 5);
    cout << "Double array: ";
    print_array(d_arr, 4);
    cout << "Matrix: " << endl;
    print_matrix(matrix, 2, 3);
    cout << endl;

    cout << "Avg int array: " << average(i_arr, 5) << endl;
    cout << "Avg double array: " << average(d_arr, 4) << endl;
    cout << endl;

    cout << "Max in int array: " << max_array(i_arr, 5) << endl;
    cout << "Max in double array: " << max_array(d_arr, 4) << endl;
    cout << "Max in matrix: " << max_matrix(matrix, 2, 3) << endl;
}