#include <iostream>
using namespace std;

double myPow(double x, int n) {
    // Base cases
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return x;
    if (x == -1 && n % 2 == 0) return 1.0;
    if (x == -1 && n % 2 != 0) return -1.0;

    // Handling negative exponent
    long binform = n;
    if (n < 0) {
        x = 1 / x;
        binform = -binform;
    }

    double ans = 1;
    cout << "Tracing Execution:\n";
    cout << "Initial x = " << x << ", binform = " << binform << ", ans = " << ans << endl;

    while (binform > 0) {
        if (binform % 2 == 1) {
            ans *= x;
            cout << "binform is odd, ans *= x -> " << ans << endl;
        }
        x *= x;
        binform /= 2;
        cout << "After squaring x = " << x << ", binform = " << binform << endl;
    }

    return ans;
}

int main() {
    double x;
    int n;
    
    // Taking input from user
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    
    // Computing power using binary exponentiation
    double result = myPow(x, n);
    cout << "Result: " << result << endl;

    return 0;
}