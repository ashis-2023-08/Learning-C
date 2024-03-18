// Add Two Numbers
// Your task is very simple: given two integers 
// A and B, write a program to add these two numbers and output the sum.
// Input Format
// The first line contains an integer T, the total number of test cases.
// Then follow T lines, each line contains two integers, 
// A and B.
// Output Format
// For each test case, add 
// A and B and display the sum in a new line.
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        // Calculate the sum of the two numbers
        int sum = a + b;

        // Output the sum
        cout << sum << endl;
    }

    return 0;
}
