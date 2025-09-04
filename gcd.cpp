#include <iostream>
using namespace std;

// Recursive function to find GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
    return a;
    return gcd(b, a % b);
    
}

int main() {
    int num1, num2;
    cout << "enter two integers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and "
    << num2 << " is: " << gcd(num1, num2)
    << endl;

    return 0;
}


