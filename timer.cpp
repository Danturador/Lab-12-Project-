#include <iostream>
#include <Windows.h>
#include <cstdlib>
using namespace std;

void timer() {
	setlocale(LC_ALL, "rus");
	int sec, min, hour = 0;
	cout << "������� �������: " << endl;
	cin >> sec;
	cout << "������� ������: " << endl;
	cin >> min;
	cout << "������� ����: " << endl;
	cin >> hour;
	cout.fill('0');
	while (true) {
		system("cls");
		cout.width(2);
		cout << hour << ":";
		cout.width(2);
		cout << min << ":";
		cout.width(2);
		cout << sec;
		Sleep(970);
		if (sec > 0) {
			sec--;
		}
		else if (sec == 0 && min > 0) {
			sec = 59;
			min--;
		}
		else if (sec == 0 && min == 0 && hour > 0) {
			sec = 59;
			min = 59;
			hour--;
		}
		else if (sec == 0 && min == 0 == hour > 0) {
			cout << endl << "������ ��������";
			break;
		}

	}
}