//To add two matrics.
#include<iostream>
using namespace std;
int main() {
    int r, c;
    cin >> r;
    cin >> c;

    int matrix1[r][c];
    int matrix2[r][c];
    int add[r][c];
    cout << "matrix-1:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "matrix-2:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            add[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "add two matrics:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
