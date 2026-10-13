#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\n\t\tЗАДАНИЕ ОНЕ";
	string color;
	cout << "\nВведите цвет светофора (red, yellow, green): ";
	cin >> color;

	switch (color[0])
	{
	case 'r':
		cout << "Стой!\n";
		break;
	case 'y':
		cout << "Приготовься!\n";
		break;
	case 'g':
		cout << "Иди!\n";
		break;
	default:
		cout << "Не знаю такого цвета\n";
	}
cout << "\n\t\tЗАДАНИЕ ТУ";
	string word;
	int password = 0;
	cout << "\nВведите кодовое слово: ";
	cin >> word;
	cout << "Введите пароль: ";
	cin >> password;

	if (word == "admin")
	{
		if (password == 1234)
		{
			cout << "Доступ разрешён\n";
		}
		else
		{
			cout << "Неверный пароль\n";
		}
	}
	else
	{
		cout << "Кто вы такой?\n";
	}
	
	cout << "\n\t\tЗАДАНИЕ ФРИ";
	int level = 0;
	cout <<"\nВведите уровень настроения (1-10): ";
	cin >> level;
	if (level >= 1 && level <= 3)
	{
		cout << "Держись, всё наладится\n";
	}
	else if (level >= 4 && level <= 6)
	{
		cout << "Нормальный день\n";
	}
	else if (level >7 && level <= 10)
	{
		cout << "Отличный день!\n";
	}
	else
	{
		cout << "Такого уровня несуществует\n";
	}

	cout << "\n\t\tЗАДАНИЕ ФО";
	char letter = 0;
	char result = 0;
	bool isLetter = true;
	cout << "\nВведите одну строчную латинскую букву: ";
	cin >> letter;
 
	switch (letter)
	{
	case 'a': result = 'd'; break;
	case 'b': result = 'e'; break;
	case 'c': result = 'f'; break;
	case 'd': result = 'g'; break;
	case 'e': result = 'h'; break;
	case 'f': result = 'i'; break;
	case 'g': result = 'j'; break;
	case 'h': result = 'k'; break;
	case 'i': result = 'l'; break;
	case 'j': result = 'm'; break;
	case 'k': result = 'n'; break;
	case 'l': result = 'o'; break;
	case 'm': result = 'p'; break;
	case 'n': result = 'q'; break;
	case 'o': result = 'r'; break;
	case 'p': result = 's'; break;
	case 'q': result = 't'; break;
	case 'r': result = 'u'; break;
	case 's': result = 'v'; break;
	case 't': result = 'w'; break;
	case 'u': result = 'x'; break;
	case 'v': result = 'y'; break;
	case 'w': result = 'z'; break;
	case 'x': result = 'a'; break;
	case 'y': result = 'b'; break;
	case 'z': result = 'c'; break;
	default:
		isLetter = false;	
	}
 
	if (isLetter)
	{
		cout << "Результат сдвига: " << result << "\n";
	}
	else
	{
		cout << "Ошибка! Это не строчная латинская буква\n";
	}

	cout << "\n\t\t ЗАДАНИЕ ФИВЕ";
	string playerChoice;
	cout << "\nКомпьютер выбрал: камень";
	cout << "\nВведите ход (к - камень, н - ножницы, б - бумага): ";
	cin >> playerChoice;
 
	if (playerChoice == "к")
	{
		cout << "Ничья\n";
	}
	else if (playerChoice == "н")
	{
		cout << "Вы проиграли\n";
	}
	else if (playerChoice == "б")
	{
		cout << "Вы победили\n";
	}
	else
	{
		cout << "Ошибка! Нужно ввести к, н или б\n";
	}
 
	cout << "\n\t\tЗАДАНИЕ СИКС";
	int currentFloor = 0, needFloor = 0;
	cout << "\nВведите текущий этаж (1-9): ";
	cin >> currentFloor;
	cout << "Введите нужный этаж (1-9): ";
	cin >> needFloor;

	if (currentFloor < 1 || currentFloor > 9 || needFloor < 1 || needFloor > 9)
	{
		cout << "Неверный этаж\n";
	}
	else if (currentFloor == needFloor)
	{
		cout << "Вы уже здесь\n";
	}
	else if (needFloor > currentFloor)
	{
		cout << "Едем вверх\n";
	}
	else
	{
		cout << "Едем вниз\n";
	}

	cout << "\n\t\t ЗАДАНИЕ СЕВЕН";
	char ch = 0;
	cout << "\nВведите символ: ";
	cin >> ch;

	if (ch >= '0' && ch <= '9')
	{
		cout << "Цифра\n";
	}
	else
	{
		switch (ch)
		{
		case '+':
		case '-':
		case '*':
		case '/':
			cout << "Оператор\n";
			break;
		case '(':
		case ')':
		case '[':
		case ']':
		case '{':
		case '}':
			cout << "Скобка\n";
			break;
		default:
			cout << "Неизвестный символ\n";
		}
	}

	cout << "\n\t\t ЗАДАНИЕ ЭЙТ";
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	cout << "\nВведите 4 числа через пробел (x1 y1 x2 y2): ";
	cin >> x1 >> y1 >> x2 >> y2;
 
	if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8)
	{
		cout << "Ошибка! Координаты должны быть от 1 до 8\n";
	}
	else
	{
		int dx = x2 - x1;
		int dy = y2 - y1;
		if (dx < 0) dx = -dx;
		if (dy < 0) dy = -dy;
 
		if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2))
		{
			cout << "Ход возможен\n";
		}
		else
		{
			cout << "Ход невозможен\n";
		}
	}

	cout << "\n\t\t ЗАДАНИЕ НАЙН";
	int roman = 0;
	cout << "\nВведите число от 1 до 10: ";
	cin >> roman;
	switch (roman)
	{
	case 1:  cout << "I\n";    break;
	case 2:  cout << "II\n";   break;
	case 3:  cout << "III\n";  break;
	case 4:  cout << "IV\n";   break;
	case 5:  cout << "V\n";    break;
	case 6:  cout << "VI\n";   break;
	case 7:  cout << "VII\n";  break;
	case 8:  cout << "VIII\n"; break;
	case 9:  cout << "IX\n";   break;
	case 10: cout << "X\n";    break;
	default:
		cout << "Ошибка! Число должно быть от 1 до 10\n";
	}
	
	cout << "\n\t\t ЗАДАНИЕ ТЕН";
	int ticket = 0;
	cout << "\nВведите шестизначное число: ";
	cin >> ticket;

	if (ticket < 100000 || ticket > 999999)
	{
		cout << "Ошибка! Не шестизначное число\n";
	}
	else
	{
		int t1 = ticket / 100000;
		int t2 = ticket / 10000 % 10;
		int t3 = ticket / 1000 % 10;
		int t4 = ticket / 100 % 10;
		int t5 = ticket / 10 % 10;
		int t6 = ticket % 10;

		int sumFirst = t1 + t2 + t3;
		int sumLast = t4 + t5 + t6;

		if ((sumFirst % 2 == 0 && sumLast % 2 == 1) || (sumFirst % 2 == 1 && sumLast % 2 == 0))
		{
			cout << "Билет счастливый!\n";
		}
		else
		{
			cout << "Билет НЕ счастливый.\n";
		}
	}

	





}
