#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0; // Initialize the loop counter
    while (i < s.length()) { // Use a while loop for better control
        if (s[i] == 'E' && i + 4 < s.length()) {
            // Check if the remaining characters form "EGYPT"
            if (s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T') {
                cout << " ";
                i += 5; // Skip "EGYPT" and continue from the character after "T"
            } else {
                cout << s[i]; // If it's not "EGYPT", print the current character
                i++;
            }
        } else {
            cout << s[i]; // If it's not 'E', print the current character
            i++;
        }
    }

    return 0;
}
