#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;


    while (Q--) {
        string query;
        cin >> query;

        if (query == "pop_back") {
            if (!S.empty())
                S.pop_back();
        } else if (query == "front") {
            if (!S.empty()) {
                cout << S.front() << endl;
            }
        } else if (query == "back") {
            if (!S.empty()) {
                cout << S.back() << endl;
            }
        } else if (query == "sort") {
            int l, r;
            cin >> l >> r;
            if ( r < l)
                swap(l,r);
            if (l <= r && l >=1 && r <= S.size()) {
                sort(S.begin() + l - 1, S.begin() + r);
            }
        } else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            if ( r < l)
                swap(l,r);
            if (l <= r && l >=1 && r <= S.size()) {
                reverse(S.begin() + l - 1, S.begin() + r);
            }
        } else if (query == "print") {
            int pos;
            cin >> pos;
            if (pos >= 1 && pos <= S.size()) {
                cout << S[pos-1] << endl;
            }
        } else if (query == "substr") {
            int l, r;
            cin >> l >> r;
            if ( r < l)
                swap(l,r);
            if (l <= r && r <= S.size()) {
                cout << S.substr(l - 1, r - l + 1) << endl;
            }
        } else if (query == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }

    return 0;
}