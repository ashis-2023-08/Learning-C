// The only line of input will contain a single integer N, denoting the number of languages for which there are courses.
// Output Format
// Output on a single line the total number of courses in the section.

#include <iostream>
using namespace std;

int main() {
    // Read the number of languages
    int N;
    cin >> N;

    // Number of courses per language
    int courses_per_language = 2;

    // Calculate the total number of courses
    int total_courses = N * courses_per_language;

    // Output the result
    cout << total_courses << endl;

    return 0;
}
