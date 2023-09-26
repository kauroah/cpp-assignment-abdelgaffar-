#include <iostream>
#include <string>

int main() {
    std::string userInput;
    std::cout << "Enter a str: ";
    std::getline(std::cin, userInput);

    std::string result;

    for (char c : userInput) {
        if (result.find(c) == std::string::npos) {
            result += c;
        }
    }
    std::cout << result << std::endl;

    return 0;
}
