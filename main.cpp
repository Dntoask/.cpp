#include <iostream>

using namespace std;

int main()
{
    int arr[5][5] = {{1,0,0,0,1},
               {0,1,0,1,0},
               {0,0,1,0,0},
               {0,1,0,1,0},
               {1,0,0,0,1}};

    for (int i = 0;i < 5;i++){
        for (int s = 0;s < 5;s++){
            cout << arr[i][s] << " ";
        }
        cout << endl;
    }
    return 0;
}
