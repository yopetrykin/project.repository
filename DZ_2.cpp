#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int n;
	string a = "cat";
	cout << a;
	do {
		cout << "1) Шуруп" << "\n";
		cout << "2) Гайка" << "\n";
		cout << "3) Гвинт" << "\n";
		cout << "4) Цвях" << "\n";
		cout << "5) Болт" << "\n";
		cout << "Введіть номер деталі від 1-5 або введіть будь-яке інше число для закінчення: ";
		cin >> n;
		switch (n) {
		case 1:
			cout << "Шуруп" << "\n";
			break;
		case 2:
			cout << "Гайка" << "\n";
			break;
		case 3:
			cout << "Гвинт" << "\n";
			break;
		case 4:
			cout << "Цвях" << "\n";
			break;
		case 5:
			cout << "Болт" << "\n";
			break;
		}

	}
	while (n == 1 || n == 2 || n ==3 || n == 4 || n == 5);
	cout << "Вибір закінчено";
	return 0;
	string a = "cat";
	cout << a;
}




