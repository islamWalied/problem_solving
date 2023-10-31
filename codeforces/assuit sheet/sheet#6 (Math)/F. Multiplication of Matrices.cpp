#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long RA, CA;
    cin >> RA >> CA;

    vector<vector<long long>> A(RA, vector<long long>(CA));
    for (long long i = 0; i < RA; i++) {
        for (long long j = 0; j < CA; j++) {
            cin >> A[i][j];
        }
    }

    long long RB, CB;
    cin >> RB >> CB;

    vector<vector<long long>> B(RB, vector<long long>(CB));
    for (int i = 0; i < RB; i++) {
        for (int j = 0; j < CB; j++) {
            cin >> B[i][j];
        }
    }

    vector<vector<long long>> multiplication(RA, vector<long long>(CB, 0));
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            for (int k = 0; k < CA; k++) {
                multiplication[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            cout << multiplication[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}