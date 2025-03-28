#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    // Compute the sum of digits
    int sum = 0;
    int temp = number; // Temporary variable to preserve the original number
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    cout << "The sum of the digits is: " << sum << endl << endl;

    // Divisibility tests using do...while loop
    int divisor = 2;
    do {
        if (number % divisor == 0) {
            cout << number << " is divisible by " << divisor << endl;
        } else {
            cout << number << " is not divisible by " << divisor << endl;
        }
        cout << endl; 
        divisor++;
    } while (divisor <= 9);

    return 0;
}
