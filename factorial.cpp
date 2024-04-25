#include <iostream>

using namespace std;

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


unsigned long long fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
    } else {
        unsigned long long fact = factorial(number);
        cout << "Factorial of " << number << " is: " << fact << endl;


        unsigned long long fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
    }

    return 0;  
    
    // changed from feacture branch
}
