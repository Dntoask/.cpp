#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;


    cout << "Input number :" << endl;
    cin >> a;

    cout << "Select operation - + * RANDOM:" << endl;
    string operation;
    cin >> operation;

    cout << "Input number" << endl;
    cin >> b;


    if (operation == "+") {
        cout << "a + b = " << a + b << endl;
    }if (operation == "-") {
        cout << "a - b = " << a - b << endl;
    }if (operation == "*") {
        cout << "a * b = " << a * b << endl;
    }if (operation == "RANDOM") {
        cout << "Wait for it! \n " << a * b - b + a << endl;
    }if (operation == " / ") {
        cout << "No such operation" << endl;
    }
return 0;
}
