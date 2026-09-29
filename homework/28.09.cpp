#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); 

	cout << "\n\t\t ЗАДАНИЕ ОНЕ"; 
	int sexznakov = 0;
	cout << "\nВведите шестизначное число: ";
	cin >> sexznakov;

	if (sexznakov < 100000 || sexznakov > 999999) 
	{
		cout << "Ошибка! Не шестизначное число\n";
	}
	else 
	{
		int d1 = sexznakov / 100000;
		int d2 = sexznakov / 10000 % 10;
		int d3 = sexznakov / 1000 % 10;
		int d4 = sexznakov / 100 % 10;
		int d5 = sexznakov / 10 % 10;
		int d6 = sexznakov % 10;

		int sum1 = d1 + d2 + d3;
		int sum2 = d4 + d5 + d6;

		if (sum1 == sum2) 
		{
			cout << "Число счастливое!\n";
		}
		else 
		{
			cout << "Число НЕ счастливое.\n";
		}
	}
	

	cout << "\n\t\t ЗАДАНИЕ ТУ"; 
	int num4 = 0;
	cout << " \nВведите четырехзначное число: ";
	cin >> num4;

	if (num4 < 1000 || num4 > 9999) 
	{
		cout << "Ошибка! Не четырехзначное число\n";
	}
	else 
	{
		int d1 = num4 / 1000;
		int d2 = num4 / 100 % 10;
		int d3 = num4 / 10 % 10;
		int d4 = num4 % 10;

		int newNum = d2 * 1000 + d1 * 100 + d4 * 10 + d3;
		cout << "Результат перестановки: " << newNum << "\n";
	}
	

	cout << "\n\t\t ЗАДАНИЕ ФРИ"; 
	int n1, n2, n3, n4, n5, n6, n7;
	cout << "\nВведите 1 число: "; cin >> n1;
	cout << "Введите 2 число: "; cin >> n2;
	cout << "Введите 3 число: "; cin >> n3;
	cout << "Введите 4 число: "; cin >> n4;
	cout << "Введите 5 число: "; cin >> n5;
	cout << "Введите 6 число: "; cin >> n6;
	cout << "Введите 7 число: "; cin >> n7;

	int maxNumber = n1; 
	if (n2 > maxNumber) 
	{
		maxNumber = n2;
	}
	if (n3 > maxNumber) 
	{
		maxNumber = n3;
	}
	if (n4 > maxNumber) 
	{
		maxNumber = n4;
	}
	if (n5 > maxNumber) 
	{
		maxNumber = n5;
	}
	if (n6 > maxNumber) 
	{
		maxNumber = n6;
	}
	if (n7 > maxNumber) 
	{
		maxNumber = n7;
	}

	cout << "Максимальное число из семи: " << maxNumber << "\n";


	cout << "\n\t\t ЗАДАНИЕ ФО"; 
	double distAB = 0, distBC = 0, weight = 0;
	cout << "\nВведите расстояние А-В (км): ";
	cin >> distAB;
	cout << "Введите расстояние В-С (км): ";
	cin >> distBC;
	cout << "Введите вес груза (кг): ";
	cin >> weight;

	double fuelPerKm = 0;
	if (weight <= 500)       fuelPerKm = 1;
	else if (weight <= 1000) fuelPerKm = 4;
	else if (weight <= 1500) fuelPerKm = 7;
	else if (weight <= 2000) fuelPerKm = 9;

	double neededAB = distAB * fuelPerKm;
	double neededBC = distBC * fuelPerKm;

	if (weight > 2000 || neededAB > 300 || neededBC > 300) 
	{
		cout << "Полет невозможен по введенному маршруту.\n";
	} 
	else 
	{
		double remainingFuel = 300 - neededAB; 
		double refuel = 0;

		if (remainingFuel < neededBC) 
		{
			refuel = neededBC - remainingFuel;
		}
		cout << "Минимальное количество топлива для дозаправки в пункте В: " << refuel << " л\n";
	}

	return 0;
}
