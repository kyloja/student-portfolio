#include <iostream>

using namespace std;

int main()
{
	cout << "\n\t\tTask #1";
	{
		const int maxSize = 100;
		int arr[maxSize];
		int n = 0;

		cout << "\nВведите количество элементов (от 1 до 100): ";
		cin >> n;

		if (n < 1 || n > maxSize)
		{
			cout << "Ошибка количество должно быть от 1 до 100\n";
		}
		else
		{
			cout << "Введите " << n << " целых чисел: ";
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}

			int sumPos = 0;
			int countNeg = 0;
			int maxElem = arr[0];
			int maxIndex = 0;

			for (int i = 0; i < n; i++)
			{
				if (arr[i] > 0)
				{
					sumPos = sumPos + arr[i];
				}
				if (arr[i] < 0)
				{
					countNeg++;
				}
				if (arr[i] > maxElem)
				{
					maxElem = arr[i];
					maxIndex = i;
				}
			}

			cout << "Сумма положительных элементов: " << sumPos << "\n";
			cout << "Количество отрицательных элементов: " << countNeg << "\n";
			cout << "Максимальный элемент: " << maxElem << ", его индекс: " << maxIndex << "\n";
		}
	}


	cout << "\n\t\tTask #2";
	{
		const int maxSize = 100;
		int arr[maxSize];
		int result[maxSize];
		int n = 0;
		int k = 0;

		cout << "\nВведите количество элементов (от 1 до 100): ";
		cin >> n;

		if (n < 1 || n > maxSize)
		{
			cout << "Ошибка количество должно быть от 1 до 100\n";
		}
		else
		{
			cout << "Введите " << n << " целых чисел: ";
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}

			cout << "Введите k (на сколько позиций сдвинуть вправо): ";
			cin >> k;

			if (k < 0)
			{
				cout << "Ошибка! k не может быть отрицательным\n";
			}
			else
			{
				k = k % n;

				for (int i = 0; i < n; i++)
				{
					result[(i + k) % n] = arr[i];
				}

				cout << "Массив после сдвига: ";
				for (int i = 0; i < n; i++)
				{
					cout << result[i] << " ";
				}
				cout << "\n";
			}
		}
	}


	cout << "\n\t\tTask #3";
	{
		const int maxSize = 10;
		int A[maxSize][maxSize];
		int m = 0;
		int n = 0;

		cout << "\nВведите количество строк и столбцов (каждое от 1 до 10): ";
		cin >> m >> n;

		if (m < 1 || m > maxSize || n < 1 || n > maxSize)
		{
			cout << "Ошибка количество должно быть от 1 до 10\n";
		}
		else
		{
			cout << "Введите элементы матрицы построчно:\n";
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cin >> A[i][j];
				}
			}

			int bestSum = -99999;
			int bestRow = 0;
			int zeroCount = 0;

			for (int i = 0; i < m; i++)
			{
				int currentRowSum = 0;

				for (int j = 0; j < n; j++)
				{
					currentRowSum = currentRowSum + A[i][j];

					if (A[i][j] == 0)
					{
						zeroCount++;
					}
				}

				cout << "Сумма строки " << i + 1 << ": " << currentRowSum << "\n";

				if (currentRowSum > bestSum)
				{
					bestSum = currentRowSum;
					bestRow = i;
				}
			}

			cout << "Строка с максимальной суммой: " << bestRow + 1 << " (сумма " << bestSum << ")\n";
			cout << "Количество нулей в матрице: " << zeroCount << "\n";
		}
	}


	cout << "\n\t\tTask #4";
	{
		const int maxSize = 10;
		int A[maxSize][maxSize];
		int B[maxSize][maxSize];
		int n = 0;

		cout << "\nВведите размер квадратной матрицы N (от 1 до 10): ";
		cin >> n;

		if (n < 1 || n > maxSize)
		{
			cout << "Ошибка N должно быть от 1 до 10\n";
		}
		else
		{
			cout << "Введите элементы матрицы A построчно:\n";
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cin >> A[i][j];
				}
			}

			int diagonalSum = 0;

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i == j)
					{
						B[i][j] = A[i][j] * 2;
						diagonalSum = diagonalSum + A[i][j];
					}
					else if (i + j == n - 1)
					{
						B[i][j] = A[i][j] + 10;
					}
					else
					{
						B[i][j] = A[i][j];
					}
				}
			}

			cout << "Матрица B:\n";
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << B[i][j] << "\t";
				}
				cout << "\n";
			}
			cout << "Сумма элементов главной диагонали: " << diagonalSum << "\n";
		}
	}

	return 0;
}