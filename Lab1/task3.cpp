#include <iostream>

using namespace std;

const int MAX_SIZE = 10;
void inputMatrix(int A[][MAX_SIZE], int m, int n);
void displayMatrix(const int A[][MAX_SIZE], int m, int n);
int sumOfElements(const int A[][MAX_SIZE], int m, int n);
void rowWiseSum(const int A[][MAX_SIZE], int m, int n);
void columnWiseSum(const int A[][MAX_SIZE], int m, int n);
void transposeMatrix(const int A[][MAX_SIZE], int m, int n);

int main() {
    int m, n;

    // Input the size of the matrix
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int matrix[MAX_SIZE][MAX_SIZE];

    int choice;
    do {
        cout << "Choose the option you want to perform" << endl;
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. Create transpose of matrix\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputMatrix(matrix, m, n);
            break;

        case 2:
            displayMatrix(matrix, m, n);
            break;

        case 3:
            cout << "Sum of all elements: " << sumOfElements(matrix, m, n) << endl;
            break;

        case 4:
            rowWiseSum(matrix, m, n);
            break;

        case 5:
            columnWiseSum(matrix, m, n);
            break;

        case 6:
            transposeMatrix(matrix, m, n);
            break;

        case 0:
            cout << "Exiting the program.\n";
            break;

        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 0);

    return 0;
}

void inputMatrix(int A[][MAX_SIZE], int m, int n) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
}

void displayMatrix(const int A[][MAX_SIZE], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int sumOfElements(const int A[][MAX_SIZE], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

void rowWiseSum(const int A[][MAX_SIZE], int m, int n) {
    cout << "Row-wise sum of matrix:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
    }
}

void columnWiseSum(const int A[][MAX_SIZE], int m, int n) {
    cout << "Column-wise sum of matrix:\n";
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += A[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << colSum << endl;
    }
}

void transposeMatrix(const int A[][MAX_SIZE], int m, int n) {
    int transposed[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed[i][j] = A[j][i];
        }
    }

    cout << "Transpose of matrix:\n";
    displayMatrix(transposed, n, m);
}