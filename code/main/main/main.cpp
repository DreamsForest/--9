#include <iostream>
#include "sdt.h"

using namespace std;
//Коментарий
int main() {
    int num1, num2, sum, difference, private_number;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    sum = num1 + num2;
    difference = num1 - num2;
    private_number = num1 \ num2;
    cout << "Сумма: " << sum << endl; 
    cout << "Разность: " << difference << endl;
    cout << "Частное: " << private_number << endl;
    return 0;
}