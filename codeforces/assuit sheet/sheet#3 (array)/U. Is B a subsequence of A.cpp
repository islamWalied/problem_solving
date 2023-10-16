#include <iostream>

const long long N = 1e5;
using namespace std;
int main(){
    unsigned long long a,b,z,n,m = 0,result = 0;
    cin >> a >> b;
    long long arr[a],arr1[b];
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < b; ++i) {
        cin >> arr1[i];
    }
    n = sizeof(arr)/sizeof(arr[0]);

    m = sizeof(arr1)/sizeof(arr1[0]);

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] == arr1[j])
        {
            j++;
        }
        i++;
    }
    if (j == m)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }


}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool isSubsequence(vector<int>& A, vector<int>& B) {
//    int n = A.size();
//    int m = B.size();
//
//    int i = 0; // Index for array A
//    int j = 0; // Index for array B
//
//    // Traverse both arrays
//    while (i < n && j < m) {
//        // If current elements match, move to the next element in B
//        if (A[i] == B[j]) {
//            j++;
//        }
//        // Move to the next element in A
//        i++;
//    }
//
//    // If all elements of B are traversed, it is a subsequence
//    return j == m;
//}
//
//int main() {
//    int N, M;
//    cin >> N;
//    cin >> M;
//    vector<int> A(N);
//    for (int i = 0; i < N; i++) {
//        cin >> A[i];
//    }
//    vector<int> B(M);
//    for (int i = 0; i < M; i++) {
//        cin >> B[i];
//    }
//
//    bool result = isSubsequence(A, B);
//    if (result) {
//        cout << "YES" << endl;
//    } else {
//        cout << "NO" << endl;
//    }
//
//    return 0;
//}
