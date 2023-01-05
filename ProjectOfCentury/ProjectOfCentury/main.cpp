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
		cout << "������� ����� ��������� ��� ������� : " << endl;
		cout << "1 - �����������" << endl;
		cout << "2 - ����" << endl;
		cout << "3 - ������" << endl;
		cout << "4 - �������" << endl;
		cout << "5 - �����" << endl;
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
			wprintf(L"\033[31m������������ ����\033[0m\n");
			break;
		}
	} while (enter != '5');
	system("cls");

	return 0;
}