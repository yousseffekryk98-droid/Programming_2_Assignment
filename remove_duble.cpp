#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int numbers[MAX_SIZE];
    int uniqueNumbers[MAX_SIZE];
    int count = 0;

    int num;
    cout << "Enter numbers (enter -1 to stop): ";
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        if (count < MAX_SIZE) {
            numbers[count++] = num;
        }
    }