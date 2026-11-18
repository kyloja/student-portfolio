#include <iostream>

using namespace std;

int main()
{
	cout << "\n\t\t ЗАДАНИЕ 1";
	const int arraySize = 10;
	int numbers[arraySize] = { 5, 0, 3, 0, 0, 7, 2, 0, 9, 4 };

	cout << "\nМассив до: ";
	for (int i = 0; i < arraySize; i++)
	{
		cout << numbers[i] << " ";
	}

	int nextFreeIndex = 0;
	for (int i = 0; i < arraySize; i++)
	{
		if (numbers[i] != 0)
		{
			numbers[nextFreeIndex] = numbers[i];
			nextFreeIndex++;
		}
	}

	for (int i = nextFreeIndex; i < arraySize; i++)
	{
		numbers[i] = -1;
	}

	cout << "\nМассив после: ";
	for (int i = 0; i < arraySize; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << "\n";


	cout << "\n\t\t ЗАДАНИЕ 2";
	const int halfSize = 5;
	int first[halfSize] = { 3, 0, -2, 5, 0 };
	int second[halfSize] = { -4, 7, 0, -1, 2 };
	int merged[halfSize * 2];
	int mergedCount = 0;

	cout << "\nПервый массив: ";
	for (int i = 0; i < halfSize; i++)
	{
		cout << first[i] << " ";
	}
	cout << "\nВторой массив: ";
	for (int i = 0; i < halfSize; i++)
	{
		cout << second[i] << " ";
	}

	for (int i = 0; i < halfSize; i++)
	{
		if (first[i] > 0)
		{
			merged[mergedCount] = first[i];
			mergedCount++;
		}
	}
	for (int i = 0; i < halfSize; i++)
	{
		if (second[i] > 0)
		{
			merged[mergedCount] = second[i];
			mergedCount++;
		}
	}

	for (int i = 0; i < halfSize; i++)
	{
		if (first[i] == 0)
		{
			merged[mergedCount] = first[i];
			mergedCount++;
		}
	}
	for (int i = 0; i < halfSize; i++)
	{
		if (second[i] == 0)
		{
			merged[mergedCount] = second[i];
			mergedCount++;
		}
	}

	for (int i = 0; i < halfSize; i++)
	{
		if (first[i] < 0)
		{
			merged[mergedCount] = first[i];
			mergedCount++;
		}
	}
	for (int i = 0; i < halfSize; i++)
	{
		if (second[i] < 0)
		{
			merged[mergedCount] = second[i];
			mergedCount++;
		}
	}

	cout << "\nИтоговый массив: ";
	for (int i = 0; i < halfSize * 2; i++)
	{
		cout << merged[i] << " ";
	}
	cout << "\n";

	return 0;
}