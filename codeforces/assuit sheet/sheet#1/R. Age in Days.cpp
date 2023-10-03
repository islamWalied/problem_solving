#include <iostream>
#include <string>


using namespace std;

int main() {
    int a , years , months, days;
    cin >> a;
    years = a / 365;
    a -= years * 365;
    months = a / 30;
    a -= months * 30;
    days = a;

    cout << years << " years\n" ;
    cout << months << " months\n";
    cout << days << " days\n";
}