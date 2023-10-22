#include <iostream>
#include <bitset>
#include <string>

using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

bool isWonderful(int N) {
    if (N % 2 == 0) {
        return false;
    }

    string binary = bitset<32>(N).to_string();
    binary = binary.substr(binary.find('1'));

    return isPalindrome(binary);
}

int main() {
    int N;
    cin >> N;

    if (isWonderful(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}