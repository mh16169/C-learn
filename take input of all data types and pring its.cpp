#include <iostream>

using namespace std;

int main()
{

    int intnum;
    double doublenum;
    char charword;
    string stringtext;

    cout << "Enter your integer number : ";
    cin >> intnum;
    cout << "Enter your double number : ";
    cin >> doublenum;
    cout << "Enter your charter : ";
    cin >> charword;
    cout << "Enter your string : ";
    cin >> stringtext;

    cout << endl;

    cout << "Interger number : " << intnum << endl;
    cout << "Double Number : " << doublenum << endl;
    cout << "Charcter : " << charword << endl;
    cout << "String : " << stringtext << endl;

    return 0;
}