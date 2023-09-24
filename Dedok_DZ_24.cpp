#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    int num;

    cout << "Введите число: ";
    cin >> num;

    int* pNum = &num;

    if (*pNum > 0) {
        cout << "Число положительное." << "\n";
    }
    else if (*pNum < 0) {
        cout << "Число отрицательное." << "\n";
    }
    else {
        cout << "Число равно нулю." << "\n";
    }
    cout << "\n";
    //Task_2
    int num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    cout << "Введите второе число: ";
    cin >> num2;

    int* pNum1 = &num1;
    int* pNum2 = &num2;

    int result;

    switch (operation) {
    case '+':
        result = *pNum1 + *pNum2;
        break;
    case '-':
        result = *pNum1 - *pNum2;
        break;
    case '*':
        result = *pNum1 * *pNum2;
        break;
    case '/':
        if (*pNum2 != 0) {
            result = *pNum1 / *pNum2;
        }
        else {
            cout << "Деление на ноль!" << "\n";
            return 1; 
        }
        break;
    default:
        cout << "Неверная операция!" << "\n";
        return 1;
    }
    cout << "Результат: " << result << "\n";
    cout << "\n";
    //Task_3
    int a = 5;
    int b = 10;

    int* pA = &a;
    int* pB = &b;

    int temp = *pA;
    *pA = *pB;
    *pB = temp;

    cout << "a = " << a << ", b = " << b << "\n";

}
