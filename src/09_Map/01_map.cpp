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
    std::cout <<countsOfStuff.at("books");
    // add item:
    countsOfStuff.emplace("pencil", 2);
    countsOfStuf.emplace("asd", 10);
    // delete item:
    countsOfStuff.erase("asd");
    return 0;
}
