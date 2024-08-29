#include <iostream>
using namespace std;

int main()
{

    int a, b, result1, result2, result3;

    a = 9;
    b = 6;

    // addition
    result1 = a + b;
    // subtraction
    result2 = a - b;
    // multiplication
    result3 = a * b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "The result is: a + b = " << result1 << endl;
    cout << "The result is: a - b = " << result2 << endl;
    cout << "The result is: a * b = " << result3 << endl;

    return 0;
}