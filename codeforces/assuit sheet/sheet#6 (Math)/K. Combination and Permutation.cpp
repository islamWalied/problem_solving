#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    long long N,M,NCR,NPR,sum = 1,sum1 = 1,sum2=1;
    cin >> N >> M;
    for (int i = N; i > 0; --i) {
        sum = sum * i;
    }
    for (int i = N-M; i > 0; --i) {
        sum1 = sum1 * i;
    }
    for (int i = M; i > 0; --i) {
        sum2 = sum2 * i;
    }
    NPR = sum / sum1;
    NCR = sum / (sum1 * sum2);
    cout << NCR << " " << NPR;

    return 0;
}