// The only line of input contains two space-separated integers 
// a and b.
// Output Format
// Output Yes, if ( )
// (a,b) form a 
// Oneful Pair
// Oneful Pair. Output No if they do not.
// You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Check if (a, b) form a Oneful Pair
    if (a + b + (a * b) == 111) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
