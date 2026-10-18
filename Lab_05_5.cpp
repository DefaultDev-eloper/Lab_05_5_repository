#include <iostream>
#include <windows.h>
using namespace std;

int maxDepth = 0;

int nsdRecursive(int n, int m, int level) {
    if (level > maxDepth) {
        maxDepth = level;
    }

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    cout << "Рівень рекурсії: " << level
        << ", n = " << n
        << ", m = " << m << endl;

    if (m == 0) {
        return n;
    }

    return nsdRecursive(m, n % m, level + 1);
}

int main() {
    int n, m;

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    cout << "Введіть n: "; cin >> n;
    cout << "Введіть m: "; cin >> m;

    if (n <= 0 || m <= 0) {
        cout << "Помилка! Числа повинні бути натуральними."
            << endl;
        return 1;
    }

    int result = nsdRecursive(n, m, 1);

    cout << "\nНайбільший спільний дільник: "
        << result << endl;

    cout << "Глибина рекурсії: "
        << maxDepth << endl;

    return 0;
}