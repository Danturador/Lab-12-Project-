#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

string InputFileName();
bool FileIsExist(string);
int CreateFile();
int ChooseOperation(int);
int EditFile();
void WriteNote();
void OpenFile();
void ReadData();
void CreateBaseForFile();

string fileName, pathForFile, newContent;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choiceOfOperation;
	do {
		system("cls");
		printf("\033[1;32mЗаметки: \nНапишите, что нужно сделать? \n1 - Создать файл\n2 - Открыть файл\n3 - Выйти из программы\n\033[0m");
		cin >> choiceOfOperation;
		switch (choiceOfOperation) {
			case 1: 
				ChooseOperation(1);
				system("cls");
				InputFileName();
				CreateFile();
				break;
			case 2:
				ChooseOperation(2);
				system("cls");
				InputFileName();
				while (!FileIsExist(pathForFile + fileName)) {
					if (!FileIsExist(pathForFile + fileName)) cout << "\033[1;32mТакого файла не существует! Введите другое имя файла!\033[0m " << endl;
					InputFileName();
				}
				OpenFile();
				break;
			case 3: break;
			default: printf("\033[1;32mТакой операции нет!\033[0m");
		}
	} while (choiceOfOperation != 3);
	return 0;
}

int CreateFile() {
	if (FileIsExist(pathForFile + fileName)) {
		cout << "\033[1;32mФайл с таким именем уже есть!\033[0m " << endl;
		while (FileIsExist(pathForFile + fileName))
		{
			cout << "\033[1;32mВведите другое имя файла!\033[0m " << endl;
			InputFileName();
		}
	}
	CreateBaseForFile();
	return 0;
}

void CreateBaseForFile() {
	system("cls");
	ofstream file(pathForFile + fileName);
	if (file.is_open())
	{
		printf("\033[1;32mВведите текст заметки:\033[0m \n");
		WriteNote();
		file << newContent;
	}
	else cout << "\033[1;31mError!\033[0m";
	file.close();
}

void OpenFile() {
	char editChoice = 'n';
	system("cls");
	ReadData();
	do {
		if (editChoice == 'y') printf("\n\033[1;32mИзменения внесены!\033[0m \n");
		printf("\n\033[1;32mХотите внести изменения в файл? y/n/r (да/нет/перезаписать все)\033[0m \n");
		cin >> editChoice;
		if (editChoice == 'y') {
			EditFile();
		}
		else if (editChoice == 'r') {
			system("cls");
			CreateBaseForFile();
		}
		else if (editChoice != 'n') {
			system("cls");
			cout << "\033[1;32mВведенный символ не соответствует предписанным операциям y/n/r!\033[0m " << endl;
		}
	} while (editChoice != 'n');
}

void ReadData() {
	system("cls");
	ifstream openFileData(pathForFile + fileName);
	printf("\033[1;32mСодержимое файла:\n\033[0m");
	if (openFileData.is_open()) {
		while (getline(openFileData, newContent)) cout << newContent << " ";
	}
	else cout << "\033[1;31mError\033[0m" << endl;
	cout << endl;
	openFileData.close();
}

int EditFile() {
	fstream editFile;
	editFile.open(pathForFile + fileName, fstream::app);
	if (editFile.is_open()) {
		ReadData();
		WriteNote();
		editFile << " " << newContent;
	}
	else cout << "\033[1;31mError\033[0m" << endl;
	editFile.close();
	return 0;
}

bool FileIsExist(string filePath)
{
	bool isExist = false;
	ifstream fin(filePath.c_str());

	if (fin.is_open())
		isExist = true;

	fin.close();
	return isExist;
}

void WriteNote() {
	cin.ignore();
	getline(cin, newContent);
}

string InputFileName() {
	cout << "\033[1;32mВведите имя файла:\033[0m " << endl;
	cin.ignore();
	getline(cin, fileName);
	fileName += ".txt";
	return fileName;
}

int ChooseOperation(int operation) {
	int choice;
	if (operation == 1) printf("\033[1;32mГде создать файл? \n1 - На рабочем столе\n2 - В папке по умолчанию(C:\ Users\ User\ Documents\)\033[0m\n");
	else if (operation == 2) printf("\033[1;32mГде находится файл? \n1 - На рабочем столе\n2 - В папке по умолчанию(C:\ Users\ User\ Documents\)\033[0m\n");
	cin >> choice;
	switch (choice) {
	default: break;
	case 1:
		pathForFile = "C:\\Users\\User\\Desktop\\";
		break;
	case 2:
		pathForFile = "C:\\Users\\User\\Documents\\";
		break;
	}
	return 0;
}