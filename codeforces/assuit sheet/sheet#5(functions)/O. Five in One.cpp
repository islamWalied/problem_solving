#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Function to get the maximum number in the array
int getMax(const vector<int>& A) {
    int maxNum = A[0];
    for (int i = 1; i < A.size(); i++) {
        if (A[i] > maxNum) {
            maxNum = A[i];
        }
    }
    return maxNum;
}

// Function to get the minimum number in the array
int getMin(const vector<int>& A) {
    int minNum = A[0];
    for (int i = 1; i < A.size(); i++) {
        if (A[i] < minNum) {
            minNum = A[i];
        }
    }
    return minNum;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to count the prime numbers in the array
int countPrimes(const vector<int>& A) {
    int primeCount = 0;
    for (int i = 0; i < A.size(); i++) {
        if (isPrime(A[i])) {
            primeCount++;
        }
    }
    return primeCount;
}

// Function to check if a number is palindrome
bool isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reversedNum;
}

// Function to count the palindrome numbers in the array
int countPalindromes(const vector<int>& A) {
    int palindromeCount = 0;
    for (int i = 0; i < A.size(); i++) {
        if (isPalindrome(A[i])) {
            palindromeCount++;
        }
    }
    return palindromeCount;
}

// Function to get the number with the maximum number of divisors
int getMaxDivisors(const vector<int>& A) {
    int maxDivisors = 0;
    int numberWithMaxDivisors = 0;

    for (int i = 0; i < A.size(); i++) {
        int num = A[i];
        int divisorCount = 0;
        for (int j = 1; j <= sqrt(num); j++) {
            if (num % j == 0) {
                divisorCount++;
                if (j != num / j) {
                    divisorCount++;
                }
            }
        }
        if (divisorCount > maxDivisors) {
            maxDivisors = divisorCount;
            numberWithMaxDivisors = num;
        } else if (divisorCount == maxDivisors) {
            numberWithMaxDivisors = max(numberWithMaxDivisors, num);
        }
    }

    return numberWithMaxDivisors;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int maxNum = getMax(A);
    int minNum = getMin(A);
    int primeCount = countPrimes(A);
    int palindromeCount = countPalindromes(A);
    int numberWithMaxDivisors = getMaxDivisors(A);

    cout << "The maximum number : " << maxNum << endl;
    cout << "The minimum number : " << minNum << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << numberWithMaxDivisors << endl;

    return 0;
}