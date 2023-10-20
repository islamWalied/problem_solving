#include <iostream>
 #include <string>
#include <algorithm>

using namespace std;

int maxSizeOfSubsequence(string S) {
    int N = S.length();
    int dp[N];
    dp[0] = 1;

    for (int i = 1; i < N; i++) {
        if (S[i] != S[i-1]) {
            dp[i] = dp[i-1] + 1;
        } else {
            dp[i] = dp[i-1];
        }
    }

    return *max_element(dp, dp+N);
}

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    int maxSize = maxSizeOfSubsequence(S);
    cout << maxSize << endl;

    return 0;
}