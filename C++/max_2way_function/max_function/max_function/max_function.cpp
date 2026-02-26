#include <iostream>
using namespace std;

int main() {
    int a[9][9];

    int mx = -1;
    int mx_i = 0, mx_j = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];

            if (a[i][j] > mx) {
                mx = a[i][j];
                mx_i = i;
                mx_j = j;
            }
        }
    }

    cout << mx << "\n";
    cout << (mx_i + 1) << " " << (mx_j + 1) << "\n"; 

    return 0;
}
