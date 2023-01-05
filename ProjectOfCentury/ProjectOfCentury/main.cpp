#include "calculate.h"
#include "watchStuff.h"
#include "casino.h"
#include "Note.h"

#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int(*modules[])() = { calc, initWatch, casino, note };
	int len = sizeof(modules) / sizeof(modules[0]);
	char enter;
	system("cls");
	do {
		cout << "Введите номер программы для запуска : " << endl;
		cout << "1 - калькулятор" << endl;
		cout << "2 - часы" << endl;
		cout << "3 - казино" << endl;
		cout << "4 - Заметки" << endl;
		cout << "5 - выход" << endl;
		cin >> enter;
		system("cls");
		switch (enter) {
		case '1':
			modules[0]();
			system("cls");
			break;
		case '2':
			modules[1]();
			system("cls");
			break;
		case '3':
			modules[2]();
			system("cls");
			break;
		case '4':
			modules[3]();
			system("cls");
			break;
		case '5':
			enter = '5';
			system("cls");
			break;
		default:
			wprintf(L"\033[31mНекорректный ввод\033[0m\n");
			break;
		}
	} while (enter != '5');
	system("cls");

	return 0;
}