// The only line of input contains two space separated integers 
// �
// X and 
// �
// Y — the threshold limit and the rate at which Chef is currently working at.

// Output Format
// If Chef is prone to errors print YES, otherwise print NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // Check if Chef is prone to errors
    if (y > x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
