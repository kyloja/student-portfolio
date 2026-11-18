#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	cout << "\n\t\t ЗАДАНИЕ 1";
	cout << "\nДвумерный массив 3x4. Считаем количество нулей.\n";

	const int rows1 = 3;
	const int cols1 = 4;
	int arr1[rows1][cols1];

	cout << "\nМассив:\n";
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols1; j++)
		{
			arr1[i][j] = rand() % 11 - 5;
			cout << arr1[i][j] << "\t";
		}
		cout << "\n";
	}

	int zeroCount = 0;
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols1; j++)
		{
			if (arr1[i][j] == 0)
			{
				zeroCount++;
			}
		}
	}

	cout << "\nКоличество нулей: " << zeroCount << "\n";

	cout << "\n\t\t ЗАДАНИЕ 2";
	cout << "\nКвадратная матрица порядка n.";
	cout << "\nНайти наибольшее в тёмно-синей области (рисунки a-k).\n";

	int n = 0;
	cout << "\nВведите порядок матрицы n (не меньше 3): ";
	cin >> n;

	if (n < 3)
	{
		cout << "Ошибка! n должно быть >= 3\n";
	}
	else
	{
		const int MAX = 20;
		int arr2[MAX][MAX];

		cout << "\nМатрица " << n << "x" << n << ":\n";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				arr2[i][j] = rand() % 50;
				cout << arr2[i][j] << "\t";
			}
			cout << "\n";
		}

		cout << "\nВарианты областей (латиница):";
		cout << "\n a - ниже главной диагонали";
		cout << "\n b - выше главной диагонали";
		cout << "\n c - верхний треугольник";
		cout << "\n d - нижний треугольник";
		cout << "\n e - крест (обе диагонали)";
		cout << "\n f - левый и правый треугольники";
		cout << "\n g - стрелка вправо";
		cout << "\n h - стрелка влево";
		cout << "\n i - выше побочной диагонали";
		cout << "\n k - ниже побочной диагонали";
		cout << "\nВыберите букву: ";
		char variant;
		cin >> variant;


		int maxVal = -1;
		bool found = false;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				bool inBlue = false;

				// a — ниже главной диагонали
				if (variant == 'a' || variant == 'A')
				{
					if (i > j) inBlue = true;
				}
				// b — выше главной
				else if (variant == 'b' || variant == 'B')
				{
					if (i < j) inBlue = true;
				}
				// c — верхний треугольник
				else if (variant == 'c' || variant == 'C')
				{
					if (i <= n / 2 && j >= i && j < n - i) inBlue = true;
				}
				// d — нижний треугольник
				else if (variant == 'd' || variant == 'D')
				{
					if (i >= n / 2 && j >= n - 1 - i && j <= i) inBlue = true;
				}
				// e — крест (обе диагонали)
				else if (variant == 'e' || variant == 'E')
				{
					if (i == j || i + j == n - 1) inBlue = true;
				}
				// f — левый + правый треугольники
				else if (variant == 'f' || variant == 'F')
				{
					if ((j <= i && j <= n - 1 - i) || (j >= i && j >= n - 1 - i)) inBlue = true;
				}
				// g — стрелка вправо
				else if (variant == 'g' || variant == 'G')
				{
					if (j >= i && j >= n - 1 - i) inBlue = true;
				}
				// h — стрелка влево
				else if (variant == 'h' || variant == 'H')
				{
					if (j <= i && j <= n - 1 - i) inBlue = true;
				}
				// i — выше побочной
				else if (variant == 'i' || variant == 'I')
				{
					if (i + j < n - 1) inBlue = true;
				}
				// k — ниже побочной
				else if (variant == 'k' || variant == 'K')
				{
					if (i + j > n - 1) inBlue = true;
				}
				else
				{
					if (i > j) inBlue = true;
				}

				if (inBlue)
				{
					if (!found || arr2[i][j] > maxVal)
					{
						maxVal = arr2[i][j];
						found = true;
					}
				}
			}
		}

		if (found)
		{
			cout << "\nНаибольшее значение в выбранной области: " << maxVal << "\n";
		}
		else
		{
			cout << "\nВ области нет элементов (или неверный вариант)\n";
		}
	}

	return 0;
}
