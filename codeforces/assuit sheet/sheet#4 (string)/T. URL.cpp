#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '?')
        {
            if (s[i+1] == 'u')
            {
                while (s[i+1] != '&')
                {
                    if (s[i+1] == '=')
                    {
                        cout <<": ";
                    }else {
                        cout << s[i+1];
                    }
                    i++;
                }
                cout << endl;
            }
            i++;
            if (s[i+1] == 'p')
            {
                while (s[i+1] != '&')
                {
                    if (s[i+1] == '=')
                    {
                        cout <<": ";
                    }else {
                        cout << s[i+1];
                    }
                    i++;
                }
                cout << endl;
            }
            i++;
            if (s[i+1] == 'p' && s[i+2] == 'r')
            {
                while (s[i+1] != '&')
                {
                    if (s[i+1] == '=')
                    {
                        cout <<": ";
                    }else {
                        cout << s[i+1];
                    }
                    i++;
                }
                cout << endl;
            }
            i++;
            if (s[i+1] == 'r')
            {
                while (s[i+1] != '&')
                {
                    if (s[i+1] == '=')
                    {
                        cout <<": ";
                    }else {
                        cout << s[i+1];
                    }
                    i++;
                }
                cout << endl;
            }
            i+=2;
            if (s[i] == 'k')
            {
                while (i < s.length())
                {
                    if (s[i] == '=')
                    {
                        cout <<": ";
                    }else {
                        cout << s[i];
                    }
                    i++;
                }
            }

        }
    }
}