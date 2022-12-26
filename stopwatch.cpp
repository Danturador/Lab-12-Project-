#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;

void stopwatch() {
	setlocale(LC_ALL, "rus");

	int sec = 0, min = 0, hour = 0;
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
		sec++;
		if (sec > 59 && min != 59) {
			min++;
			sec = 0;
		}
		else if (min == 59 && sec > 59) {
			hour++;
			min = 0;
			sec = 0;
		}
		cout << endl;

	}
}