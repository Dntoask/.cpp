#include <iostream>

using namespace std;

main()
{
    double Hour = 80;

    cout <<"Type in a hour:" << endl;
    cin >> Hour;

    if (Hour < 12 &&  Hour >= 5) {
        cout <<"Morning" << endl;
  } else if(Hour == 12 ){
        cout <<"Noon" << endl;
  } else if(Hour < 20 && Hour > 12){
        cout <<"Afternoon" << endl;
  } else if (Hour > 24){
        cout <<"Not an Hour" << endl;
}
    else if(Hour < 5 || Hour >= 20){
        cout <<"Night" << endl;
  }
return 0;













}
