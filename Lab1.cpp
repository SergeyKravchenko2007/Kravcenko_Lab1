#include <iostream>
#include <Windows.h>
#include <string>
int main() {
    std::string name;
    std::cout << "Введіть ваше ім'я: ";
std::getline(std::cin, name);  // Читаємо всю строку
// Перевірка на порожнє ім'я
    if (name.empty()) {
        std::cout << "Ім'я не може бути порожнім!" << std::endl;
    } else {
        std::cout << "Ваше ім'я: " << name << std::endl;
}
return 0;
}
