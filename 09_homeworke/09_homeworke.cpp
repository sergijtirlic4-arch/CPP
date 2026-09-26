#include <iostream>
using namespace std;



const int SIZE = 4;

void initMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matrix[i][j] = rand() % 100 + 1;
        }
    }
}

void initMatrix(double matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matrix[i][j] = (rand() % 1000) / 10.0;
        }
    }
}

void initMatrix(char matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matrix[i][j] = 32 + rand() % 95;
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void printMatrix(double matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void printMatrix(char matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void findDiagonalMinMax(int matrix[SIZE][SIZE], int& minVal, int& maxVal) {
    minVal = matrix[0][0];
    maxVal = matrix[0][0];
    for (int i = 1; i < SIZE; ++i) {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

void findDiagonalMinMax(double matrix[SIZE][SIZE], double& minVal, double& maxVal) {
    minVal = matrix[0][0];
    maxVal = matrix[0][0];
    for (int i = 1; i < SIZE; ++i) {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

void findDiagonalMinMax(char matrix[SIZE][SIZE], char& minVal, char& maxVal) {
    minVal = matrix[0][0];
    maxVal = matrix[0][0];
    for (int i = 1; i < SIZE; ++i) {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

int main() {
    srand(time(0));

    int intMatrix[SIZE][SIZE];
    initMatrix(intMatrix);
    cout << "Integer Matrix:" << endl;
    printMatrix(intMatrix);
    int minInt, maxInt;
    findDiagonalMinMax(intMatrix, minInt, maxInt);
    cout << "Diagonal Min: " << minInt << ", Max: " << maxInt << endl << endl;

    double doubleMatrix[SIZE][SIZE];
    initMatrix(doubleMatrix);
    cout << "Double Matrix:" << endl;
    printMatrix(doubleMatrix);
    double minDouble, maxDouble;
    findDiagonalMinMax(doubleMatrix, minDouble, maxDouble);
    cout << "Diagonal Min: " << minDouble << ", Max: " << maxDouble << endl << endl;

    char charMatrix[SIZE][SIZE];
    initMatrix(charMatrix);
    cout << "Character Matrix:" << endl;
    printMatrix(charMatrix);
    char minChar, maxChar;
    findDiagonalMinMax(charMatrix, minChar, maxChar);
    cout << "Diagonal Min: " << minChar << ", Max: " << maxChar << endl;
}
