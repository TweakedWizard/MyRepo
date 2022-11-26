#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string txt = "Hello, Welcome Suckers!";

    cout << "The Strinng: " << txt << endl;
    cout << "The lenngth of string: " << sizeof(txt) << endl;
    cout << "character at index 1: " << txt.at(1) << endl;
    cout << "character on index 1 uisng array: " << txt[1] << endl;
    cout << "is the string empty: " << txt.empty() << endl;
    cout << "substring from 3rd position to 4 characters: " << txt.substr(3, 4) << endl;
    cout << "replace the substring to went: " << txt.replace(3, 4, "went") << endl;
    cout << "append a strirng 'ennd' at end of the string: " << txt.append(" end") << endl;
    cout << "append a strirng 'ennd' at end of the string using operator: " << txt + " end" << endl;
    cout << "string 'insert' inserting at 3rd pos. of string: " << txt.insert(3, " insert") << endl;

    string txt1 = txt;
    cout << "The new strirn: " << txt1 << endl;

    cout << "input a sentence: " << endl;
    getline(cin, txt);
    cout << txt;

    return 0;
}