#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T subtract(T a, T b) {
    return a - b;
}

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

template <typename T>
T divide(T a, T b) {
    if (b == 0) {
        throw runtime_error("Помилка: ділення на нуль!");
    }
    return a / b;
}

int main() {
    system("chcp 1251>null");
    char operation;
    double x, y;

    cout << "Введіть два числа: ";
    cin >> x >> y;

    cout << "Оберіть операцію (+, -, *, /): ";
    cin >> operation;

    try {
        switch (operation) {
        case '+':
            cout << "Результат: " << add(x, y) << endl;
            break;
        case '-':
            cout << "Результат: " << subtract(x, y) << endl;
            break;
        case '*':
            cout << "Результат: " << multiply(x, y) << endl;
            break;
        case '/':
            cout << "Результат: " << divide(x, y) << endl;
            break;
        default:
            cout << "Невідома операція!" << endl;
        }
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
