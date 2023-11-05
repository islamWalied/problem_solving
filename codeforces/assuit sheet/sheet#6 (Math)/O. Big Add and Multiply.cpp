#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string addLargeNumbers(string num1, string num2) {
    string result;
    int carry = 0;

    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        result += to_string(digit);

        i--;
        j--;
    }

    if (carry > 0) {
        result += to_string(carry);
    }

    reverse(result.begin(), result.end());

    return result;
}

string multiplyLargeNumbers(string num1, string num2) {
    int n = num1.size();
    int m = num2.size();

    vector<int> result(n + m, 0);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + result[i + j + 1];

            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    string multipliedNumber;
    for (int digit : result) {
        multipliedNumber += to_string(digit);
    }

    if (multipliedNumber[0] == '0') {
        multipliedNumber = multipliedNumber.substr(1);
    }

    return multipliedNumber;
}

int main() {
    string N;
    cin >> N;

    string addResult = addLargeNumbers(N, "9999");
    string multiplyResult = multiplyLargeNumbers(N, "9999");

    cout << addResult << endl;
    cout << multiplyResult << endl;

    return 0;
}