#include <iostream>

// This program greets the user by name
int main() {
    std::string name;
    std::cout << "Enter your name: "; // Ask user for their name
    std::cin >> name; // Read user's name
    std::cout << "Hello world from " << name << std::endl; // Greet the user
    return 0;
}
