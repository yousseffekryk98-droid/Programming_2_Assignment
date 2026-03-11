#include <iostream>
using namespace std;
int main() {
    int n, reversedNumber = 0;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    for (; n > 0; n /= 10) {
        int remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

   cout << "Reversed Number: " << reversedNumber <<endl;

    return 0;
}