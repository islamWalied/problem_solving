#include <iostream>
#include <string>


using namespace std;
int main() {
    double a;
    cin >> a;
    int b = a;
    float c = a - b;
    if(c == 0){
        cout << "int " << b;
    }
    else
    {
        cout << "float " << b << " " << c;
    }
}