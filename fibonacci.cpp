#include <iostream>

using namespace std;

int main()
{
    double a = 0;
    double b = 1;
    int c = 0;
    double c2;

    for(c = 0; c < 100; c++){
    c2 = a + b;
    a = b;
    b = c2;
    cout << c2 << endl;
   }
    return 0;
}
