#include <iostream>;
#include <Windows.h>;
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Продам цуценят.\n"
		"Порода: ротвейлер.\n"
		"……\n"
		"Тел.: 222-22-22\n"
		"222\t|";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "   222   ";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "|\n"
		"22\t|";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "   22    ";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "|\n"
		"22\t|";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "   22    ";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "|\n"
		"і т.д." << endl;
	return 0;
}