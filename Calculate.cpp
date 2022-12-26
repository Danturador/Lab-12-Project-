#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void main() {

	setlocale(LC_ALL, "russian");

	char action;
	double num1, num2;
	
	do {

		cout << setw(45) << "+" << "--------------------+-------+" << endl;
		cout << setw(45) << "|" << "      ДЕЙСТВИЕ      | ВВОД  |" << endl;
		cout << setw(45) << "+" << "--------------------+-------+" << endl;
		cout << setw(45) << "|" << "       ВЫХОД        |   0   |" << endl;
		cout << setw(45) << "+" << "--------------------+-------+" << endl;
		cout << setw(45) << "|" << "  Сложение          |   +   |" << endl;
		cout << setw(45) << "|" << "  Вычитание         |   -   |" << endl;
		cout << setw(45) << "|" << "  Умножение         |   *   |" << endl;
		cout << setw(45) << "|" << "  Деление           |   /   |" << endl;
		cout << setw(45) << "|" << "  Деление (остаток) |   %   |" << endl;
		cout << setw(45) << "|" << "  Степень           |   ^   |" << endl;
		cout << setw(45) << "|" << "  Корень            |   q   |" << endl;
		cout << setw(45) << "|" << "  Модуль            |   |   |" << endl;
		cout << setw(45) << "|" << "  Синус             |   s   |" << endl;
		cout << setw(45) << "|" << "  Косинус           |   c   |" << endl;
		cout << setw(45) << "|" << "  Тангенс           |   t   |" << endl;
		cout << setw(45) << "+" << "--------------------+-------+" << endl;
		cout << endl << endl << setw(45) << "Введите действие: ";

		cin >> action;
		switch (action) {

		case '0':
			cout << endl << setw(45) << "Спасибо за пользование программой!!!" << endl;
			break;
		case '+':
			cout << "\tВведите первое число: ";
			cin >> num1;
			cout << "\tВведите второе число: ";
			cin >> num2;
		
			cout << "\tРезультат: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			break;

		case '-':
			cout << "\tВведите первое число: ";
			cin >> num1;
			cout << "\tВведите второе число: ";
			cin >> num2;

			cout << "\tРезультат: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			break;

		case '*':
			cout << "\tВведите первое число: ";
			cin >> num1;
			cout << "\tВведите второе число: ";
			cin >> num2;

			cout << "\tРезультат: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			break;

		case '/':
			if (num2 != 0) {
				
			cout << "\tВведите первое число: ";
			cin >> num1;
			cout << "\tВведите второе число: ";
			cin >> num2;

			cout << "\tРезультат: " << num1 << " / " << num2 << " = " <<  num1 / num2 << endl;
			
			} else {

				cout << "Ошибка!\nДеление на 0!" << endl << endl;

			}
			break;

		case '%':
			int num3, num4;
			cout << "\tВведите первое число: ";
			cin >> num3;
			cout << "\tВведите первое число: ";
			cin >> num4;

			if (num4 != 0) {

				cout << "\tРезультат: " << num3 << " % " << num4 << " = " << num3 % num4 << endl;

			}
			else {

				cout << "\tОшибка!\n\tДеление на 0!" << endl;

			}
			break;

		case '^':
			cout << "\tВведите число: ";
			cin >> num1;
			cout << "\tВведите степень числа: ";
			cin >> num2;

			cout << "\tРезультат: " << num1 << "^" << num2 << " = " <<pow(num1, num2) << endl;
			break;

		case 'q':
			cout << " Введите число: ";
			cin >> num1;

			if (num1 > -1) {
				cout << "\tРезультат: sqrt(" << num1 << ")  = " << sqrt(num1) << endl;

			}else {

				cout << "\tОшибка!\n\tКорень из отрицательного числа!" << endl;

			}
			break;

		case '|':
			cout << "\tВведите число: ";
			cin >> num1;

			cout << "\tРезультат: abs(" << num1 << ") = " << abs(num1) << endl;
			break;

		case 'с':
			cout << "\tВведите число: ";
			cin >> num1;

			cout << "\tРезультат: cos(" << num1 << ")" << cos(num1) << endl;
			break;

		case 's':
			cout << "\tВведите число: ";
			cin >> num1;

			cout << "\tРезультат: sin(" << num1 << ") = " << sin(num1) << endl;
			break;

		case 't':
			cout << "\tВведите число: ";
			cin >> num1;


			cout << "\tРезультат: tan(" << num1 << ") = " << tan(num1) << endl;
			break;

		default: 
			if (action != '0') {

			cout << endl << "\tОшибка!\n\tКоманда не распознана!\n\tПроверьте введенное значение!" << endl;
			
			}
			break;
		}

		system("pause");
		system("cls");
	} while (action != '0');
}
