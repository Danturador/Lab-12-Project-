#include "calculate.h"
#include "watchStuff.h"
#include "casino.h"

#include <string>

int main() {
	setlocale(LC_ALL, "rus");
	
	int(*modules[])() = { calc, initWatch, casino };
	int enter, len = sizeof(modules) / sizeof(modules[0]);
	cout << "1 - �����������\n2 - ����\n3 - ������\n4 - ���� ��� ������ �����\n������� ����� ��������� ��� �������: ";
	cin >> enter;
	while (enter > len) {
		wprintf(L"\033[31m������������ ����\033[0m\n");
		cin >> enter;
	}
	if (enter == 0)
		return 0;
	system("cls");
	modules[enter - 1]();

	return 0;
}