#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int findNthPrime(int n) {
    int count = 0;
    int prime = 2;
    int i = 2;

    while (count < n) {
        if (isPrime(i)) {
            prime = i;
            count++;
        }
        i++;
    }
    return prime;
}

int main() {
    int n;
    cout << "Enter the position of the prime number you want to find: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
    } else {
        int nthPrime = findNthPrime(n);
        cout << "The " << n << "th prime number is: " << nthPrime << endl;
    }

    return 0;
}
