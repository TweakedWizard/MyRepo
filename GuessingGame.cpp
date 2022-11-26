#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

    int number = 5;
    int guesses = 5;
    int try_count = 0;
    int input;

    for  (try_count; try_count < guesses; try_count ++) {
        cout << "Enter your guess: ";
        cin >> input;

        if ( input != guesses && input < number) {
            cout << "Input number is too low." << endl;
        }
        else if (input != guesses && input > number) {
            cout << "Input number is too high!" << endl;
        }
        else if (input == number) {
            cout << "You Win!" << endl;
            break;
        }
    }

    if (input != guesses) {
            cout << endl << "You Lose.";
    }

    return 0;

}
