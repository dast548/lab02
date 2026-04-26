#include <iostream>
#include <string>

// Программа запрашивает имя пользователя и выводит приветствие
int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
