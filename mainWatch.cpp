#include <iostream>
using namespace std;

extern void time();
extern void timer();
extern void stopwatch();


int main() {

	setlocale(LC_ALL, "Rus");

	cout << "Âûáåðèòå âàðèàíò èñïîëüçîâàíèÿ: " << endl;
	cout << "1 - Ïîêàçàòü âðåìÿ" << endl;
	cout << "2 - Òàéìåð" << endl;
	cout << "3 - Ñåêóíäîìåð" << endl;
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
