#include <iostream>
#include <vector>
#include <list>

int main() {
    setlocale(LC_ALL, "RU");
    // Создать вектор и список с одним миллионом элементов
    std::vector<int> vec(1000000);
    std::list<int> lst(1000000);

    // Распечатать размер вектора и списка в байтах
    std::cout << "Размер вектора: " << sizeof(vec) << " байт" << std::endl;
    std::cout << "Размер списка: " << sizeof(lst) << " байт" << std::endl;

    return 0;
}
