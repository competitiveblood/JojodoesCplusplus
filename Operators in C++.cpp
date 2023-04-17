#include <iostream>
using namespace std;

int main() {
    int count = 0;

    // Increment count using prefix ++ operator
    cout << "Prefix ++ operator:" << endl;
    cout << "count = " << ++count << endl; // Output: count = 1
    cout << "count = " << ++count << endl; // Output: count = 2

    // Decrement count using postfix -- operator
    cout << "\nPostfix -- operator:" << endl;
    cout << "count = " << count-- << endl; // Output: count = 2
    cout << "count = " << count-- << endl; // Output: count = 1

    // Increment count using compound assignment operator
    cout << "\nCompound assignment operator:" << endl;
    count += 3; // Equivalent to count = count + 3;
    cout << "count = " << count << endl; // Output: count = 4

    return 0;
}
