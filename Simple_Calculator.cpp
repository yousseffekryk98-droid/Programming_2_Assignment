#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
cout << "The sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
cout << "The product of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
cout << "The difference of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;

   if(num2 != 0){
    cout << " perform division " << num1 << " and " << num2 << " is: " << num1 / num2;
    } else 
    {
        cout << " no Division ";

}
    return 0;
}