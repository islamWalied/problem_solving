#include <iostream>
const long long N = 1e5;
using namespace std;

int main() {
    int x,arr[N];
    bool isPalindrome = true;
    cin >> x;
    for(int i = 0;i < x;i++){
        cin >> arr[i];
    }
    for(int j = 0; j < x /2;j++){
        if(arr[j] != arr[x - j - 1]){
            isPalindrome = false;
        }
    }
    if(isPalindrome)
        cout << "YES";
    else
        cout << "NO";
}