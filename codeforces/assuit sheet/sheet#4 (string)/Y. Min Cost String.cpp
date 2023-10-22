#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    //abc??def?gh
    //4 9 5 9 6 1 0 3 7 2 5 9 6 1 3 2 3 2 9 1 1 0 1 8 8 4
    string s;
    int cost[26];
    cin >> s;
    for (int i = 0; i < 26; ++i) {
        cin >> cost[i];
    }
    unsigned long long size = s.size();
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        counter = 0;
        if (s[i] == '?')
        {
            for (int j = i; j < size; ++j) {
                if (s[j] == '?')
                {
                    counter++;

                } else {
                    break;
                }
            }
            if (counter == size)
            {
                cout << "0" << endl;
                for (int j = 0; j < size; ++j) {
                    cout << "a";
                }
                return 0;
            } else {
                if (i == 0)
                {
                    int max = INT_MAX,index;
                    for (int j = 0; j < s[counter]-97+1; ++j) {
                        int mycost = abs(cost[s[counter]-97] - cost[j]);
                        if (mycost < max)
                        {
                            max = mycost;
                            index = j;
                        }
                    }
                    char c = index+97;
                    for (int z = 0; z < counter; ++z) {
                        s[z] = c;
                    }
                    i+=counter;
                } else if ( i+counter == size)
                {
                    int max = INT_MAX,index;
                    for (int j = 0; j < s[i-1]-97+1; ++j) {
                        int mycost = abs(cost[s[i-1]-97] - cost[j]);
                        if (mycost < max)
                        {
                            max = mycost;
                            index = j;
                        }
                    }
                    char c = index+97;
                    for (int z = i; z < counter+i; ++z) {
                        s[z] = c;
                    }
                    break;
                } else {
                    int max = INT_MAX,index;

                    for (int j = 0; j < 26; ++j) {
                        int mycost =    abs(cost[s[i-1] - 97] - cost[j]) +
                                        abs(cost[j] - cost[s[i+counter] - 97]);
                        if (mycost < max)
                        {
                            max = mycost;
                            index = j;
                        }
                    }
                    char c = index+97;
                    for (int z = i; z < i+counter; ++z) {
                        s[z] = c;
                    }
                    i+=counter;
                }
            }
        }
    }
    long long result = 0;
    for (int i = 0; i < size -1 ; ++i) {
        result += abs(cost[s[i] -97] - cost[s[i+1] -97]);
    }
    cout << result << endl;
    cout << s <<endl;
}