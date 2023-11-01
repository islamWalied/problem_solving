#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

void printPrimeFactors(int n) {
    vector<int> factors = primeFactors(n);
    map<int, int> factorCounts;
    for (int factor : factors) {
        factorCounts[factor]++;
    }

    bool firstFactor = true;
    for (const auto& factorCount : factorCounts) {
        if (!firstFactor) {
            cout << "*";
        }
        cout << "(" << factorCount.first << "^" << factorCount.second << ")";
        firstFactor = false;
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    printPrimeFactors(N);

    return 0;
}