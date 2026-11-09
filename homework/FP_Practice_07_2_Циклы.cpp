#include <iostream>
 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
 
	cout << "\n\t\tTask #1";
	cout << "\n\tПроверка таблицы умножения";
	cout << "\nУровни сложности:";
	cout << "\n1 - лёгкий (числа от 2 до 5, 5 вопросов)";
	cout << "\n2 - средний (числа от 2 до 9, 10 вопросов)";
	cout << "\n3 - сложный (числа от 2 до 20, 15 вопросов)";
 
	int level = 0;
	cout << "\nВыберите уровень: ";
	cin >> level;
 
	int maxNumber = 0;
	int questions = 0;
 
	if (level == 1)
	{
		maxNumber = 5;
		questions = 5;
	}
	else if (level == 2)
	{
		maxNumber = 9;
		questions = 10;
	}
	else if (level == 3)
	{
		maxNumber = 20;
		questions = 15;
	}
 
	if (questions == 0)
	{
		cout << "Ошибка\n";
	}
	else
	{
		long long seed = 0;
		cout << "\nВведите любое число (от него зависят вопросы): ";
		cin >> seed;
 
		int correct = 0;
		for (int i = 1; i <= questions; i++)
		{
			seed = (seed * 1103515245 + 12345) % 2147483648;
			int a = (seed / 65536) % (maxNumber - 1) + 2;
 
			seed = (seed * 1103515245 + 12345) % 2147483648;
			int b = (seed / 65536) % (maxNumber - 1) + 2;
 
			int answer = 0;
			cout << "\nВопрос " << i << " из " << questions << ": " << a << " * " << b << " = ";
			cin >> answer;
 
			if (answer == a * b)
			{
				cout << "Верно!";
				correct++;
			}
			else
			{
				cout << "Неверно. правильный ответ: " << a * b;
			}
		}
 
		int percent = correct * 100 / questions;
 
		cout << "\n\nПравильных ответов: " << correct << " из " << questions;
		cout << "\nРезультат: " << percent << "%";
 
		if (percent >= 90)
		{
			cout << "\nОценка: 5\n";
		}
		else if (percent >= 70)
		{
			cout << "\nОценка: 4\n";
		}
		else if (percent >= 50)
		{
			cout << "\nОценка: 3\n";
		}
		else
		{
			cout << "\nОценка: 2\n";
		}
	}
 
 
	cout << "\n\t\tTask #2";
	int n = 0;
	cout << "\nВведите размер ромба (количество строк верхней половины): ";
	cin >> n;
 
	if (n < 1)
	{
		cout << "Ошибка! Размер должен быть больше нуля\n";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int s = 1; s <= n - i; s++)
			{
				cout << " ";
			}
			for (int k = 1; k <= 2 * i - 1; k++)
			{
				cout << "*";
			}
			cout << "\n";
		}
 
		for (int i = n - 1; i >= 1; i--)
		{
			for (int s = 1; s <= n - i; s++)
			{
				cout << " ";
			}
			for (int k = 1; k <= 2 * i - 1; k++)
			{
				cout << "*";
			}
			cout << "\n";
		}
	}
 
	return 0;
}
 