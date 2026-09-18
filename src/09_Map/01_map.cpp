/*
Author: DryFish;
License: The Unlicense;
*/
#include <iostream>
#include <string>
// std::map is in <map> header
#include <map>

int main() {
    std::map<std::string, int> countsOfStuff {
        {"books", 3},
        {"pen", 1},
    };
    // get item:
    std::cout << countsOfStuff.at("books") << '\n';
    // another way: it will create new key with value = 0 (if it's integer) or empty if it's string
    std::cout << countsOfStuff["notebook"] << '\n'; // will create item if it doesn't exist yet.
    // add item:
    countsOfStuff.emplace("pencil", 2);
    countsOfStuff.emplace("asd", 10);
    // delete item:
    countsOfStuff.erase("asd");
    return 0;
}
