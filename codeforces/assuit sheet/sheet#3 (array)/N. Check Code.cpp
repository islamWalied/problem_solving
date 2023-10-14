#include <iostream>
const long long N = 1e5;
using namespace std;
int main(){
    int a,b;
    bool code = 0;
    string s;
    cin >> a >> b;
    cin >> s;
    int len = s.length();
    if (s[a] != '-') {
        cout << "No";
        return 0;
    }
    for(int i = 0;i<len;i++){
        if((s[i] < '0' || s[i] > '9') && i != a){
            code =1;
        }
    }
    if(code == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;

}

