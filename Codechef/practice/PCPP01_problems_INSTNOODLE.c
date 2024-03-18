// Chef and Instant Noodles
// Chef has invented 
// 1
// 1-minute Instant Noodles. As the name suggests, each packet takes exactly 
// 1
// 1 minute to cook
// Chef's restaurant has 
// X stoves and only 
// 1
// 1 packet can be cooked in a single stove at any minute.
// How many customers can Chef serve in 
// Y minutes if each customer orders exactly 
// 1
// 1 packet of noodles?
// Input Format
// The first and only line of input contains two space-separated integers 
// X and 
// Y — the number of stoves and the number of minutes, respectively.
// Output Format
// Print a single integer, the maximum number of customers Chef can serve in 
// Y minutes

#include <iostream>
using namespace std;

int main() {
    // Number of stoves and minutes
    int X, Y;
    cin >> X >> Y;

    // Calculate the total number of customers served
    int total_customers_served = X * Y;

    // Output the result
    cout << total_customers_served << endl;

    return 0;
}
