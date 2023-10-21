#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    long long n,sum = 0;
    string S;
    cin >> n;
    cin >> S;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'V')
            sum += 5;
        else if (S[i] == 'W')
            sum += 2;
        else if (S[i] == 'Y')
        {
            if (i < S.size()-1)
            {
                S.push_back(S[i+1]);
                S[i+1] = '0';
            }
        }
        else if (S[i] == 'X')
        {
            if (i < S.size()-1)
                S[i+1] = '0';
        }
        else if (S[i] == 'Z')
        {
            if (i < S.size() -1) {
                if (S[i+1] == 'V') {
                    sum /= 5;
                    S[i+1] = '0';
                } else if (S[i+1] == 'W') {
                    sum /= 2;
                    S[i+1] = '0';
                }
            }
        }
    }
    cout << sum;
}