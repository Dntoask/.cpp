#include <iostream>

using namespace std;

int main()
{
    string word = "qwerty";
    cout << "Give me a word" << endl;
    cin >> word;

    char s = word[0];
    word[0] = '(';
    word[word.length() - 1] = ')';

    string substring = word.substr(1,word.length() - 1);
    char a = substring[0];
    substring[0] = '(';
    substring[word.length()- 1] = ')';

    string StringType = "word";
    cout << "select a string, WORD or SUBSTRING" << endl;
    cin >> StringType;

    if (StringType == "WORD") {
        cout << word << endl;
    }else if (StringType == "SUBSTRING") {
        cout << substring << endl;
    }else cout << "You didn't type right" << endl;

    return 0;
}
