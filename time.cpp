#include <iostream>
#include <Windows.h>
#include <cstdlib>
using namespace std;

void time() {
	SYSTEMTIME st;
	while (true) {
		GetLocalTime(&st);
		cout << st.wHour << " " << st.wMinute << " " << st.wSecond << endl;
		Sleep(1000);
		system("cls");
	}
}
