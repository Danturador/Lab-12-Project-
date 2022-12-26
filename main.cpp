#include <iostream>
using namespace std;

extern void time();
extern void timer();
extern void stopwatch();


int main() {

	setlocale(LC_ALL, "Rus");

	cout << "Выберите вариант использования: " << endl;
	cout << "1 - Показать время" << endl;
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