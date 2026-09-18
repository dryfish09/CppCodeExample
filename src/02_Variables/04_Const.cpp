/*
File name: Const.cpp
License: The Unlicense
*/
#include <iostream>
int main() {
    // 'const' keyword in C++ is like 'val' in Kotlin:
    const float pi = 3.14f; // can't change this. In this example, 'float' is enough
    // constexpr - must be computable at compile-time:
    constexpr int num1 = 2;
    constexpr int num2 = num1 * 2 + 5; // evaluated by compiler
    // if you try to change it, compiler will be angry and throw an error.
    // print (use) it:
    std::cout << "3 first digits of pi is: " << pi << std::endl;
    return 0;
}
/*
const and constexpr difference:
const:

Meaning: value won't change 
Initialization: runtime or compile-time
Evaluated: whenever
work with functions (will learn later): no
constexpr:

Meaning: Values known at compile-time
Imitialization: Must be compile time
Evaluated: at compiler time
Work with functions: yes!
*/
