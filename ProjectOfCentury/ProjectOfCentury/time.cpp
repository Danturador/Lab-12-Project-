#include "watchStuff.h"

void time() {
	SYSTEMTIME st;
	while (true) {
		GetLocalTime(&st);
		cout << st.wHour << " " << st.wMinute << " " << st.wSecond << endl;
		Sleep(1000);
		system("cls");
	}
}
