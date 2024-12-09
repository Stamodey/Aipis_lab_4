#include <iostream>
//Эта программа приветствует пользователя по имени
int main() {
    std::string name;
    std::cout << "Enter your name: "; //Просим пользователя ввести его имя
    std::cin >> name;// считываем имя пользователя
    std::cout << "Hello world from " << name << std::endl; // приветствуем пользователя
    return 0;
}

