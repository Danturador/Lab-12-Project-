#include "watchStuff.h"

int initWatch() {

	setlocale(LC_ALL, "Russian");

	cout << "�������� ������� �������������:\n";
	cout << "1 - ������� �����" << endl;
	cout << "2 - ������" << endl;
	cout << "3 - ����������" << endl;
	int x;
	cin >> x;
	switch (x) {
	case 1: {
		time();
		break;
	}
	case 2: {
		timer();
		break;
	}
	case 3: {
		stopwatch();
		break;
	}
	}

	return 0;
}
