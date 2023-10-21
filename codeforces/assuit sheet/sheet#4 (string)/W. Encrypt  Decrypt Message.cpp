#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned long long a,b;
    cin >> a;
    string s,Key,Original;
    cin >> s;
    Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    b = Original.size();
    if (a == 1)
    {
        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];

            for (int j = 0; j < b; ++j) {
                if (c == Original[j])
                {
                    cout << Key[j];
                }
            }
        }
    }
    else {
        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];

            for (int j = 0; j < b; ++j) {
                if (c == Key[j])
                {
                    cout << Original[j];
                }
            }
        }
    }

}
