#include <iostream>
#include <vector>
#include <string>

// Function to check if a number is a lucky number
bool isLucky(int number) {
    std::string numStr = std::to_string(number);
    for (char digit : numStr) {
        if (digit != '4' && digit != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> luckyNumbers;

    // Generate all lucky numbers up to 1000
    for (int i = 1; i <= 1000; ++i) {
        if (isLucky(i)) {
            luckyNumbers.push_back(i);
        }
    }

    // Check if n is almost lucky
    bool isAlmostLucky = false;
    for (int luckyNumber : luckyNumbers) {
        if (n % luckyNumber == 0) {
            isAlmostLucky = true;
            break;
        }
    }

    if (isAlmostLucky) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
