#include "calculate.h"
#include "watchStuff.h"
#include "casino.h"

#include <string>

int main() {
	setlocale(LC_ALL, "rus");
	
	int(*modules[])() = { calc, initWatch, casino };
	int enter, len = sizeof(modules) / sizeof(modules[0]);
	cout << "1 - калькулятор\n2 - часы\n3 - казино\n4 - чёто что сделал Даник\nВведите номер программы для запуска: ";
	cin >> enter;
	while (enter > len) {
		wprintf(L"\033[31mНекорректный ввод\033[0m\n");
		cin >> enter;
	}
	if (enter == 0)
		return 0;
	system("cls");
	modules[enter - 1]();

	return 0;
}