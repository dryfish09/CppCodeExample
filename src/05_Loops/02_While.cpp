/*
file name: While.cpp
license: The Unlicense
*/
#include <iostream>
int main() {
    // while loop - loop until ...
    // you can add bool yourBool = true here
    while (true) { // you can replace 'true' with yourBool. Like: while (yourBool)
        // code body here, write anything you want.
        int score = 10;
        if (score >=8 && score < 11) {
            std::cout << "you have the biggest score, excellent!" << std::endl;
            break; // exit loop, if you don't have, program will never ends.
        } else {
            std::cout << "Score is smaller than 999" << std::endl;
            break;
        }
    }
    return 0;
}
/*
// while syntax:
while (condition) {
    // body here, don't just print
    }
*/
