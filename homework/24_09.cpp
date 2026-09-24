#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");

	cout << "\n\t\t TASK ONE\n";
	cout << "Hello, World!";

	cout << "\n\n\t\t TASK TWO";
	int num1 = 0;
	int num2 = 0;
	cout << "\nВведите два целых числа: ";
	cin >> num1 >> num2;
	cout << "Сумма: " << num1 + num2;

	cout << "\n\n\t\t TASK THREE";
	int a = 0;
	int b = 0;
	cout << "\nВведите два целых числа a и b: ";
	cin >> a >> b;
	cout << "Сумма: " << a + b;
	cout << "\nРазность: " << a - b;
	cout << "\nПроизведение: " << a * b;
	cout << "\nЦелая часть от деления: " << a / b;
	cout << "\nОстаток от деления: " << a % b;

	cout << "\n\n\t\t TASK FOUR";
	double dlina = 0;
	double shirina = 0;
	cout << "\nВведите длину и ширину прямоугольника: ";
	cin >> dlina >> shirina;
	double perimetr = 2 * (dlina + shirina);
	double ploshad = dlina * shirina;
	cout << "Периметр: " << perimetr;
	cout << "\nПлощадь: " << ploshad;

	cout << "\n\n\t\t TASK FIVE";
	double x1 = 0;
	double x2 = 0;
	double x3 = 0;
	cout << "\nВведите три числа: ";
	cin >> x1 >> x2 >> x3;
	double srednee = (x1 + x2 + x3) / 3.0;
	cout << "Среднее арифметическое: " << srednee;

	cout << "\n\n\t\t TASK SIX";
	int s = 0;
	cout << "\nВведите секунды: ";
	cin >> s;
	int hour = s / 3600;
	int minute = (s % 3600) / 60;
	int second = s % 60;
	cout << "Время: " << hour << ":" << minute << ":" << second;

	cout << "\n\n\t\t TASK SEVEN";
	const double NINE = 9;
	const double FIVE = 5;
	double celsius = 0;
	cout << "\nВведите температуру в градусах Цельсия: ";
	cin >> celsius;
	double fahrenheit = celsius * NINE / FIVE + 32;
	cout << "Температура по Фаренгейту: " << fahrenheit;

	cout << "\n\n\t\t TASK EIGHT";
	const double PI = 3.14159;
	double radius = 0;
	cout << "\nВведите радиус круга: ";
	cin >> radius;
	double dlinaOkr = 2 * PI * radius;
	double ploshadKruga = PI * radius * radius;
	cout << "Длина: " << dlinaOkr;
	cout << "\nПлощадь: " << ploshadKruga;

	cout << "\n\n\t\t TASK NINE";
	int number = 0;
	cout << "\nВведите четырёхзначное число: ";
	cin >> number;
	int c1 = number / 1000;
	int c2 = number / 100 % 10;
	int c3 = number / 10 % 10;
	int c4 = number % 10;
	cout << "Сумма: " << c1 + c2 + c3 + c4;
	cout << "\nПроизведение: " << c1 * c2 * c3 * c4;

	cout << "\n\n\t\t TASK TEN";
	const double TAX = 0.13;
	double stavka = 0;
	double hours = 0;
	double premia = 0;
	cout << "\nВведите ставку, часы и премию: ";
	cin >> stavka >> hours >> premia;
	double nachisleno = stavka * hours + premia;
	double nalog = nachisleno * TAX;
	double naRuki = nachisleno - nalog;
	cout << "Начислено: " << nachisleno;
	cout << "\nНалог: " << nalog;
	cout << "\nНа руки: " << naRuki;

	cout << "\n\n\t\t TASK ELEVEN";
	long long n = 0;
	cout << "\nВведите девятизначное число: ";
	cin >> n;
	long long d1 = n / 100000000;
	long long d2 = n / 10000000 % 10;
	long long d3 = n / 1000000 % 10;
	long long d4 = n / 100000 % 10;
	long long d5 = n / 10000 % 10;
	long long d6 = n / 1000 % 10;
	long long d7 = n / 100 % 10;
	long long d8 = n / 10 % 10;
	long long d9 = n % 10;

	long long summa = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9;
	long long proizv = d1 * d2 * d3 * d4 * d5 * d6 * d7 * d8 * d9;
	long long revers = d9 * 100000000 + d8 * 10000000 + d7 * 1000000 + d6 * 100000 + d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
	long long altSumma = d1 - d2 + d3 - d4 + d5 - d6 + d7 - d8 + d9;
	long long nechet = d1 * 10000 + d3 * 1000 + d5 * 100 + d7 * 10 + d9;
	long long raznica = n - revers;
	long long palindrom = 1 / (raznica * raznica + 1);

	cout << "Сумма цифр: " << summa;
	cout << "\nПроизведение цифр: " << proizv;
	cout << "\nПеревёртыш: " << revers;
	cout << "\nЗнакочередующаяся сумма: " << altSumma;
	cout << "\nЧисло из нечётных позиций: " << nechet;
	cout << "\nПалиндром: " << palindrom << "\n";

	return 0;
}