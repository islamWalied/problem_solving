#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    long long count = 0,result = 0,e= 0,g= 0,t= 0,y= 0,p= 0;
    bool found = false;
    string s,s1,s2;
    cin >> s;
    s1 = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'E' || s[i] == 'e'){
            e++;
        }
        if (s[i] == 'g' || s[i] == 'G'){
            g++;
        }
        if (s[i] == 'y' || s[i] == 'Y'){
            y++;
        }
        if (s[i] == 'P' || s[i] == 'p'){
            p++;
        }
        if (s[i] == 't' || s[i] == 'T'){
            t++;
        }
    }
//    if (e != 0)
//    {
//        count++;
//        e--;
//    }
    while (e!=0 && t!=0 && g!=0 && p!=0 && y!=0 )
    {
        count++;
        e--;
        g--;
        t--;
        y--;
        p--;
    }
    cout << count;
}