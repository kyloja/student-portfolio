#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    cout << "\n\t\tИдентификация магического числа";
	int secret = 42;
	bool guessed = false;
	string question;

	string thisWord = "это ";
	string moreWord = "больше ";
	string lessWord = "меньше ";
	string divWord = "делится на ";

	cout << "\nЯ загадал число. Задавайте вопросы:";
	cout << "\n  это N?   больше N?   меньше N?   делится на N?\n";

	while (!guessed)
	{
		cout << "Ваш вопрос: ";
		getline(cin, question);
		int kind = 0;

		if (question.find(thisWord) == 0)
		{
			kind = 1;
			question.erase(0, thisWord.length());
		}
		else if (question.find(moreWord) == 0)
		{
			kind = 2;
			question.erase(0, moreWord.length());
		}
		else if (question.find(lessWord) == 0)
		{
			kind = 3;
			question.erase(0, lessWord.length());
		}
		else if (question.find(divWord) == 0)
		{
			kind = 4;
			question.erase(0, divWord.length());
		}
		int number = 0;
		bool hasNumber = false;

		for (int i = 0; i < (int)question.length(); i++)
		{
			char c = question[i];
			if (c >= '0' && c <= '9')
			{
				number = number * 10 + (c - '0');
				hasNumber = true;
			}
		}
		if (kind == 0 || !hasNumber)
		{
			cout << "Не понял вопрос\n";
		}
		else if (kind == 1)
		{
			if (number == secret)
			{
				cout << "Верно! Это " << secret << "\n";
				guessed = true;
			}
			else
			{
				cout << "Нет\n";
			}
		}
		else if (kind == 2)
		{
			if (secret > number) cout << "Да\n";
			else cout << "Нет\n";
		}
		else if (kind == 3)
		{
			if (secret < number) cout << "Да\n";
			else cout << "Нет\n";
		}
		else
		{
			if (number == 0) cout << "Делить на ноль нельзя\n";
			else if (secret % number == 0) cout << "Да\n";
			else cout << "Нет\n";
		}
	}
    cout << "\n\t\tТернарный калькулятор флагов";
	int a = 0, b = 0, c = 0;
	cout << "\nВведите три целых числа: ";
	cin >> a >> b >> c;

	int maxNumber = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	int sumPositive = (a > 0 ? a : 0) + (b > 0 ? b : 0) + (c > 0 ? c : 0);

	int flag = (a > 0 && a == b && b == c) ? 1 : 0;

	cout << "Максимальное из трёх: " << maxNumber;
	cout << "\nСумма положительных: " << sumPositive;
	cout << "\nРавносторонний треугольник (1 - да, 0 - нет): " << flag << "\n";

	cout << "\t\t\nБитовая маска прав доступа";
	int mask = 0;
	cout << "Введите число от 0 до 15: ";
	cin >> mask;

	if (mask < 0 || mask > 15)
	{
		cout << "\nОшибка! Число должно быть от 0 до 15\n";
	}
	else
	{
		bool canRead = (mask & 4) != 0;
		bool canWrite = (mask & 2) != 0;
		bool canExecute = (mask & 1) != 0;
		bool canDelete = (mask & 8) != 0;

		cout << "Чтение: " << (canRead ? "Да" : "Нет");
		cout << ", Запись: " << (canWrite ? "Да" : "Нет");
		cout << ", Исполнение: " << (canExecute ? "Да" : "Нет");
		cout << ", Удаление: " << (canDelete ? "Да" : "Нет") << "\n";
	}

	cout << "\t\t\nОпределение типа шахматной клетки";
	string cell;
	cout << "\nВведите клетку (например, a1 или h8): ";
	cin >> cell;

	if (cell.length() != 2)
	{
		cout << "\nОшибка! Нужно ввести букву и цифру, например e4\n";
	}
	else
	{
		int col = 0;
		switch (cell[0])
		{
		case 'a': col = 1; break;
		case 'b': col = 2; break;
		case 'c': col = 3; break;
		case 'd': col = 4; break;
		case 'e': col = 5; break;
		case 'f': col = 6; break;
		case 'g': col = 7; break;
		case 'h': col = 8; break;
		}

		int row = cell[1] - '0';

		if (col == 0 || row < 1 || row > 8)
		{
			cout << "Ошибка! Буква от a до h, цифра от 1 до 8\n";
		}
		else
		{
			if ((col + row) % 2 == 0)
			{
				cout << "Цвет клетки: чёрная\n";
			}
			else
			{
				cout << "Цвет клетки: белая\n";
			}

			bool colEdge = (col == 1 || col == 8);
			bool rowEdge = (row == 1 || row == 8);

			if (colEdge && rowEdge)
			{
				cout << "Тип клетки: угловая\n";
			}
			else if (colEdge || rowEdge)
			{
				cout << "Тип клетки: боковая\n";
			}
			else
			{
				cout << "Тип клетки: центральная\n";
			}
		}
	}

	cout << "\t\tПринадлежность точки N-угольнику";

		string pass;
	cout << "Введите пароль: ";
	getline(cin, pass);

	bool lenOk = (pass.length() >= 8 && pass.length() <= 12);
	bool hasDigit = (pass.find_first_of("0123456789") != string::npos);
	bool hasUpper = (pass.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos);
	bool hasLower = (pass.find_first_of("abcdefghijklmnopqrstuvwxyz") != string::npos);

	if (lenOk && hasDigit && hasUpper && hasLower)
	{
		cout << "Пароль валидный!\n";
	}
	else
	{
		cout << "Пароль НЕ валидный:\n";
		if (!lenOk)    cout << "- длина должна быть от 8 до 12 символов\n";
		if (!hasDigit) cout << "- нет цифры\n";
		if (!hasUpper) cout << "- нет заглавной буквы\n";
		if (!hasLower) cout << "- нет строчной буквы\n";
	}

	cout << "\t\t\nПринадлежность точки N-угольнику (N=3, 4, 5).";
		double x = 0, y = 0, cx = 0, cy = 0, radius = 0;
	int figure = 0;

	cout << "\nВведите координаты точки (x y): ";
	cin >> x >> y;
	cout << "\nВведите фигуру (1 - треугольник, 2 - квадрат, 3 - пятиугольник): ";
	cin >> figure;
	cout << "\nВведите координаты центра (x y): ";
	cin >> cx >> cy;
	cout << "\nВведите радиус описанной окружности: ";
	cin >> radius;

	bool inside = false;

	if (figure < 1 || figure > 3 || radius <= 0)
	{
		cout << "\nОшибка! Фигура от 1 до 3, радиус больше нуля\n";
	}
	else if (figure == 1)
	{
		// вершины правильного треугольника одна вершина смотрит вверх
		double p1x = cx;
		double p1y = cy + radius;
		double p2x = cx - radius * sqrt(3.0) / 2;
		double p2y = cy - radius / 2;
		double p3x = cx + radius * sqrt(3.0) / 2;
		double p3y = cy - radius / 2;

		// барицентрические координаты точки
		double denom = (p2y - p3y) * (p1x - p3x) + (p3x - p2x) * (p1y - p3y);

		double l1 = ((p2y - p3y) * (x - p3x) + (p3x - p2x) * (y - p3y)) / denom;
		double l2 = ((p3y - p1y) * (x - p3x) + (p1x - p3x) * (y - p3y)) / denom;
		double l3 = 1 - l1 - l2;

		if (l1 >= -1e-9 && l2 >= -1e-9 && l3 >= -1e-9)
		{
			inside = true;
		}

		cout << (inside ? "\nТочка внутри треугольника\n" : "\nТочка вне треугольника\n");
	}
	else
	{
		// квадрат и пятиугольник: сравниваем расстояние до центра с радиусом
		double distance = sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy));

		if (distance <= radius)
		{
			inside = true;
		}

		if (figure == 2)
		{
			cout << (inside ? "\nТочка внутри квадрата\n" : "Точка вне квадрата\n");
		}
		else
		{
			cout << (inside ? "\nТочка внутри пятиугольника\n" : "Точка вне пятиугольника\n");
		}
	}

	cout << "\t\t\nАнализатор даты без календаря";
	int day = 0, month = 0, year = 0;
	char dot1 = 0, dot2 = 0;
	cout << "\nВведите дату (ДД.ММ.ГГГГ): ";
	cin >> day >> dot1 >> month >> dot2 >> year;

	bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	int daysInMonth = 0;
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		daysInMonth = 31;
		break;
	case 4: case 6: case 9: case 11:
		daysInMonth = 30;
		break;
	case 2:
		daysInMonth = leap ? 29 : 28;
		break;
	}

	if (daysInMonth == 0 || year < 1 || year > 9999 || day < 1 || day > daysInMonth)
	{
		cout << "\nОшибка! Такой даты не существует\n";
	}
	else
	{
		// номер дня в году: прибавляем дни всех прошлых месяцев
		int dayOfYear = day;
		switch (month)
		{
		case 12: dayOfYear += 30; // ноябрь
		case 11: dayOfYear += 31; // октябрь
		case 10: dayOfYear += 30; // сентябрь
		case 9:  dayOfYear += 31; // август
		case 8:  dayOfYear += 31; // июль
		case 7:  dayOfYear += 30; // июнь
		case 6:  dayOfYear += 31; // май
		case 5:  dayOfYear += 30; // апрель
		case 4:  dayOfYear += 31; // март
		case 3:  dayOfYear += leap ? 29 : 28; // февраль
		case 2:  dayOfYear += 31; // январь
		}

		// ГГГГММДД: цифры g1 g2 g3 g4 m1 m2 d1 d2
		int g1 = year / 1000;
		int g2 = year / 100 % 10;
		int g3 = year / 10 % 10;
		int g4 = year % 10;
		int m1 = month / 10;
		int m2 = month % 10;
		int d1 = day / 10;
		int d2 = day % 10;

		bool palindrome = (g1 == d2 && g2 == d1 && g3 == m2 && g4 == m1);

		cout << "\nДней в этом месяце: " << daysInMonth;
		cout << "\nНомер дня в году: " << dayOfYear;
		if (palindrome)
		{
			cout << "\nДата - палиндром в формате ГГГГММДД\n";
		}
		else
		{
			cout << "\nДата НЕ палиндром в формате ГГГГММДД\n";
		}
	}

	cout << "\t\t\nКлассификатор взаимного расположения прямых.";
	double k1 = 0, b1 = 0, k2 = 0, b2 = 0;
	cout << "\nПрямая 1 (y = k1*x + b1), введите k1 и b1: ";
	cin >> k1 >> b1;
	cout << "\nПрямая 2 (y = k2*x + b2), введите k2 и b2: ";
	cin >> k2 >> b2;

	bool sameK = fabs(k1 - k2) < 1e-9;
	bool sameB = fabs(b1 - b2) < 1e-9;

	if (sameK && sameB)
	{
		cout << "Совпадают\n";
	}
	else if (sameK)
	{
		cout << "Параллельны\n";
	}
	else
	{
		// прямые пересекаются, считаем точку пересечения
		double crossX = (b2 - b1) / (k1 - k2);
		double crossY = k1 * crossX + b1;

		if (fabs(k1 * k2 + 1) < 1e-9)
		{
			cout << "\nПерпендикулярны\n";
		}
		else
		{
			cout << "\nПересекаются\n";
		}
		cout << "\nТочка пересечения: (" << crossX << "; " << crossY << ")\n";
	}

	cout << "\t\t\nТернарный FizzBuzz (одна строка вывода).";
	int n = 0;
	cin >> n;

	cout << (n % 15 == 0 ? "FizzBuzz" : n % 3 == 0 ? "Fizz" : n % 5 == 0 ? "Buzz" : to_string(n)) << "\n";

	
    cout << "\t\t\nОптимизатор тарифа связи\n";
	double minutes = 0, gigabytes = 0, sms = 0;
	cout << "\nВведите минуты: ";
	cin >> minutes;
	cout << "\nВведите гигабайты: ";
	cin >> gigabytes;
	cout << "\nВведите количество SMS: ";
	cin >> sms;

	// Тариф 1 эконом
	double cost1 = 10;
	if (minutes > 300)  cost1 += (minutes - 300) * 0.05;
	if (gigabytes > 5)  cost1 += (gigabytes - 5) * 2;
	if (sms > 50)       cost1 += (sms - 50) * 0.1;

	// Тариф 2 стандарт
	double cost2 = 20;
	if (minutes > 600)  cost2 += (minutes - 600) * 0.03;
	if (gigabytes > 15) cost2 += (gigabytes - 15) * 1.5;
	if (sms > 150)      cost2 += (sms - 150) * 0.05;

	// Тариф 3 максимум 
	double cost3 = 35;
	if (minutes > 2000)  cost3 += (minutes - 2000) * 0.02;
	if (gigabytes > 50)  cost3 += (gigabytes - 50) * 1;
	if (sms > 500)       cost3 += (sms - 500) * 0.03;

	cout << "\nЭконом: " << cost1 << "$";
	cout << "\nСтандарт: " << cost2 << "$";
	cout << "\nМаксимум: " << cost3 << "$";

	if (cost1 <= cost2 && cost1 <= cost3)
	{
		cout << "\nСамый выгодный тариф: Эконом (" << cost1 << "$)\n";
	}
	else if (cost2 <= cost1 && cost2 <= cost3)
	{
		cout << "\nСамый выгодный тариф: Стандарт (" << cost2 << "$)\n";
	}
	else
	{
		cout << "\nСамый выгодный тариф: Максимум (" << cost3 << "$)\n";
	}


	cout << "Детектор логических парадоксов."
	string command;
	bool logic_inverted = false;
	bool lightOn = false;
	bool exitGame = false;

	cout << "Загаданное действие: включить свет";
	cout << "\nКоманды: включить, выключить, инвертировать логику, выход\n";

	while (!exitGame)
	{
		cout << "Введите команду: ";
		getline(cin, command);

		if (command == "выход")
		{
			exitGame = true;
		}
		else if (command == "инвертировать логику")
		{
			logic_inverted = !logic_inverted;
			cout << "Логика инвертирована\n";
		}
		else if (command == "включить" || command == "выключить")
		{
			bool doAction = logic_inverted ? (command == "включить") : (command == "выключить");

			if (doAction)
			{
				lightOn = true;
				cout << "Свет включён\n";
			}
			else
			{
				cout << "Ничего не произошло\n";
			}
		}
		else
		{
			cout << "Неизвестная команда\n";
		}
	}

	cout << "Свет сейчас " << (lightOn ? "включён" : "выключен") << "\n";

	cout << "Конструктор булевой функции.";
	setlocale(LC_ALL, "Russian");

	int A = 0, B = 0, C = 0, func = 0;
	cout << "Введите A, B, C (каждое 0 или 1): ";
	cin >> A >> B >> C;
	cout << "Введите номер функции (0-7): ";
	cin >> func;

	bool okABC = (A == 0 || A == 1) && (B == 0 || B == 1) && (C == 0 || C == 1);

	if (!okABC || func < 0 || func > 7)
	{
		cout << "Ошибка! A, B, C - это 0 или 1, номер функции от 0 до 7\n";
	}
	else
	{
		bool a = A, b = B, c = C;
		bool answer = false;

		switch (func)
		{
		case 0: answer = false;             break; // ложь
		case 1: answer = a && b && c;       break; // A и B и C
		case 2: answer = a && b && !c;      break; // A и B и НЕ C
		case 3: answer = a && (b || c);     break; // A и (B или C)
		case 4: answer = (a && b) || c;     break; // (A и B) или C
		case 5: answer = (a != b);          break; // A xor B
		case 6: answer = !(a && b && c);    break; // НЕ (A и B и C)
		case 7: answer = a || b || c;       break; // A или B или C
		}

		cout << "Результат функции " << func << ": " << answer << "\n";
	}
	return 0;
}