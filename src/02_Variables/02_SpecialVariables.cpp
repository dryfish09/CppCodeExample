/*
filename: SpecialVariables.cpp
license: Unlicense
*/
#include <iostream>
// From now on, you need to get used to not using `using namespace std` in your code. You will understand why when you work on large projects that utilize multiple libraries.
int main() {
    // The `float` type stores non-integer data. It is used for values ​​that do not require high precision, such as scores, player health in games, etc.
    float playerHealth = 3.67f; // A float requires the 'f' or 'F' suffix after the value.
    std::cout << "Player's Health: " << playerHealth << std::endl;
    // The `double` type is quite similar to `float`, but it offers greater precision by allowing for longer decimal parts and larger numerical values. It is used when data storage requires near-absolute precision
    double moneyInCreditCard = 36.67; // `double` does not require a suffix after the value.
    std::cout << "Money in my credit card is " << moneyInCreditCard << std::endl; // When you don't use `using namespace std`, you must include the `std::` prefix so the compiler knows which function from which namespace you intend to use.
    long double veryBigNumber = 36.67676767673667L; // requires L suffix
    std::cout << "number in my mind: " << veryBigNumber << std::endl;
    return 0;
}
