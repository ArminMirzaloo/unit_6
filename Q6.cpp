#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void sortRows(int mat[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        insertionSort(mat[i], n);
    }
}

int main() {
    int mat[10][10] = {{3, 1, 4}, {1, 5, 9}, {2, 6, 5}};
    int m = 3, n = 3;

    cout << "Matrix before sorting:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    sortRows(mat, m, n);

    cout << "Matrix after sorting:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}