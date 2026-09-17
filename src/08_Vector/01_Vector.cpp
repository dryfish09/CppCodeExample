#include <iostream>
// required:
#include <vector>
int main() {
    // vector - smarter arrays
    std::vector<int> numbers = {1, 2, 3};
    // add item:
    numbers.push_back(4);
    numbers.push_back(5);
    // add item from place:
    numbers.insert(numbers.begin() + 2, 17); // add 17 to 3rd place on vector
    // remove item:
    numbers.pop_back(); // remove last item
    numbers.erase(numbers.begin() + 3); // remove 4th item
    // access to it (like arrays!)
    std::cout << numbers[0] << std::endl;
    // we also have safer way, to prevent Undefined Behavior (UB)
    std::cout << numbers.at(1) << std::endl;
    return 0;
}
