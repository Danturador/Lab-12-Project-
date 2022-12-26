#include "watchStuff.h"

int initWatch() {

	setlocale(LC_ALL, "Russian");

	cout << "Выберите вариант использования:\n";
	cout << "1 - Текущее время" << endl;
	cout << "2 - Таймер" << endl;
	cout << "3 - Секундомер" << endl;
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
