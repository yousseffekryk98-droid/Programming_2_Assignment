#include <iostream>
using namespace std;

void reverseString(char input[], char result[]) {
    int n = 0;
    while(input[n] != '\0') {
        n++;
    }
    
    for (int i = n - 1; i >= 0; i--) {
        result[n - 1 - i] = input[i];
    }
    result[n] = '\0';
}

int main() {
    char input[100];
    char result[100];
    
    cin >> input;
    
    reverseString(input, result);
    
    cout << result << endl;
    
    return 0;
}
