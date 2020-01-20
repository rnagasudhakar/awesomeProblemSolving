#include <iostream>

using namespace std;

int m, n;
bool A[100][100] = {1};
bool B[100][100];

int main() {
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = 1;
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!B[i][j]) {
                for (int a = 0; a < m; a++) {
                    A[a][j] = 0;
                }
                for (int b = 0; b < n; b++) {
                    A[i][b] = 0;
                }
            }
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            bool c = 0;
            for (int a = 0; a < m; a++) {
                c |= A[a][j];
            }
            for (int b = 0; b < n; b++) {
                c |= A[i][b];
            }
            if (B[i][j] != c) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}