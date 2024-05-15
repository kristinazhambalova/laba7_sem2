#include <iostream>
#include <vector>
#include <list>
#include <chrono>

using namespace std;
using namespace std::chrono;

void test_insert(int n) {
    list<int> l;
    vector<int> v;

    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        l.push_back(i);
    }
    auto end = high_resolution_clock::now();
    cout << "Вставка в список: " << duration_cast<microseconds>(end - start).count() << " мкс" << endl;

    start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }
    end = high_resolution_clock::now();
    cout << "Вставка в вектор: " << duration_cast<microseconds>(end - start).count() << " мкс" << endl;
}

void test_erase(int n) {
    list<int> l;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        l.push_back(i);
        v.push_back(i);
    }

    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        l.pop_back();
    }
    auto end = high_resolution_clock::now();
    cout << "Удаление из списка: " << duration_cast<microseconds>(end - start).count() << " мкс" << endl;

    start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        v.pop_back();
    }
    end = high_resolution_clock::now();
    cout << "Удаление из вектора: " << duration_cast<microseconds>(end - start).count() << " мкс" << endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int n = 1000000;

    test_insert(n);
    cout << endl;
    test_erase(n);

    return 0;
}
