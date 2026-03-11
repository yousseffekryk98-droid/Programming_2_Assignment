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

    int uniqueCount = 0;
    for (int i = 0; i < count; i++) {
        bool found = false;
        for (int j = 0; j < uniqueCount; j++) {
            if (numbers[i] == uniqueNumbers[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            uniqueNumbers[uniqueCount++] = numbers[i];
        }
    }

    cout << "Unique numbers: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << uniqueNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}