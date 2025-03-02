  /*+--------------------------------+
  |        Start                   |
  +--------------------------------+
               |
               v
  +------------------------------+
  |  Input n (the number)         |
  +------------------------------+
               |
               v
  +------------------------------+
  | Initialize fact = 1           |
  +------------------------------+
               |
               v
  +------------------------------+
  | Set original_n = n            |
  +------------------------------+
               |
               v
  +------------------------------+
  |  i = 1                        |
  +------------------------------+
               |
               v
  +------------------------------+
  |  Is i <= n?                   |
  +------------------------------+
      /             \
     Yes             No
     /                 \
    v                   v
+-----------------------+         +-----------------------------+
| fact = fact * i       |         | Print factorial (fact)       |
+-----------------------+         | and original_n               |
               |                   +-----------------------------+
               v                              |
+------------------------------+              |
| Increment i by 1             |              v
+------------------------------+       +-------------------------+
               |                       |          End             |
               v                       +-------------------------+
    Go back to the decision: 
     "Is i <= n?"
*/


#include<iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;

    int original_n = n; // Store the original value of n for output

    for (int i = 1; i <= n; i++) {
        fact *= i;  // Multiply fact by each value from 1 to n
    }

    cout << "The factorial of " << original_n << " is: " << fact;
    return 0;
}
