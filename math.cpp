#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    
    cout << "Input number :" << endl;
    cin >> a;
    
    cout << "Select operation : - + * RANDOM:" << endl;
    string operation;
    cin >> operation;
    
    cout << "Input number :" << endl;
    cin >> b;
    
    

    if (operation == "+") {
        cout << "a + b = " << a + b << endl;
    }if (operation == "-") {
        cout << "a - b = " << a - b << endl;
    }if (operation == "*") {
        cout << "a * b = " << a * b << endl;
    }if (operation == "RANDOM") {
        cout << "Wait for it!" << a * b - b + a << endl;
    }if (operation == " / ") {
        cout << "This operation is not supported" << endl;
    }else cout << "operation does not exist.Try again" << endl;
        return 1;
    }
return 0;
}
