#include <iostream>
#include "sdt.h"

using namespace std;

int main() {
    int num1, num2, sum, difference; // добавляем переменную для хранения разности
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    sum = num1 + num2;
    difference = num1 - num2; // вычисляем разность
    cout << "Сумма: " << sum << endl; // выводим и сумму, и разность
    cout << "Разность: " << difference << endl;

    return 0;
}