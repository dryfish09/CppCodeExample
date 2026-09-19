/*
Filename: Enum.cpp
License: The Unlicense
*/
#include <iostream>
#include <string>
// enum is a list of variables, good for logging (logging libraries use this), etc.
// basic example, we use scoped enum.
enum class Color {
    red,
    blue,
    green
};
// enum with its value
enum class Status : int {
    ok = 200,
    not_found = 404
};
// to change enum into string, we need to write a "parser"
std::string enumToString (Color c) {
        
    switch (c) {
        case Color::red:
        return "Red"; // no need to break when we have return
        case Color::blue:
        return "Blue";
        case Color::green:
        return "Green";
        default:
        return "Unknown";
    }
}
int main() {
    // change color to string:
    std::string myColor = enumToString(Color::RED);
    std::cout << "my color: " << myColor << std::endl;
    // type casting (to use status)
    Status HttpStatus = Status::ok;
    std::cout << "ok status code is: " << static_cast<int>(HttpStatus) <<std::endl;
    return 0;
}
