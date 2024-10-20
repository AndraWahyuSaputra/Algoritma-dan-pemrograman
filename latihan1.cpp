#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a;  // Perbaikan input
    cin >> b;  // Perbaikan input

    if (a > b)
        cout << "a is greater than b" << endl;
    else
        cout << "b is greater than a" << endl;  // di bagian endl ini tidak titik koma ;

    return 0;
}
