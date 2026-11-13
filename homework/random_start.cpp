#include <iostream>
#include <stdlib.h> // rand, srand
#include <time.h>   // time
//Конструкция рандома srand(time(NULL));

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    cout << "\t\t\tTask #1\n";
    int arr1[10];

    cout << "Массив: ";
    for (int i = 0; i < 10; i++) {
        arr1[i] = rand() % 100;
        cout << arr1[i] << " ";
    }
    cout << "\n";

    int minVal = arr1[0];
    int maxVal = arr1[0];

    for (int i = 1; i < 10; i++) {
        if (arr1[i] < minVal) {
            minVal = arr1[i];
        }
        if (arr1[i] > maxVal) {
            maxVal = arr1[i];
        }
    }

    cout << "Минимум: " << minVal << "\n";
    cout << "Максимум: " << maxVal << "\n";

    cout << "\t\t\tTask #2\n";
    int arr2[10];
    int a, b, limit;
    int sum = 0;

    cout << "Введите начало диапазона: ";
    cin >> a;
    cout << "Введите конец диапазона: ";
    cin >> b;
    cout << "Введите число для сравнения: ";
    cin >> limit;

    cout << "Массив: ";
    for (int i = 0; i < 10; i++) {
        arr2[i] = a + rand() % (b - a + 1);
        cout << arr2[i] << " ";

        if (arr2[i] < limit) {
            sum = sum + arr2[i];
        }
    }
    cout << "\n";

    cout << "Сумма элементов меньше " << limit << ": " << sum << "\n";

    cout << "\t\t\tTask #3\n";
    double arr3[12];

    for (int i = 0; i < 12; i++) {
        cout << "Введите прибыль за " << i + 1 << " месяц: ";
        cin >> arr3[i];
    }

    int start, end;
    cout << "Введите начальный месяц диапазона (1-12): ";
    cin >> start;
    cout << "Введите конечный месяц диапазона (1-12): ";
    cin >> end;

    int minMonth = start - 1;
    int maxMonth = start - 1;

    for (int i = start - 1; i <= end - 1; i++) {
        if (arr3[i] < arr3[minMonth]) {
            minMonth = i;
        }
        if (arr3[i] > arr3[maxMonth]) {
            maxMonth = i;
        }
    }

    cout << "Минимальная прибыль была в " << minMonth + 1 << " месяце\n";
    cout << "Максимальная прибыль была в " << maxMonth + 1 << " месяце\n";

    cout << "\t\t\tTask #4\n";
    double arr4[10];

    cout << "Массив: ";
    for (int i = 0; i < 10; i++) {
        arr4[i] = (rand() % 201 - 100) / 10.0;
        cout << arr4[i] << " ";
    }
    cout << "\n";
    double negSum = 0;
    for (int i = 0; i < 10; i++) {
        if (arr4[i] < 0) {
            negSum = negSum + arr4[i];
        }
    }
    int minIdx = 0;
    int maxIdx = 0;
    for (int i = 1; i < 10; i++) {
        if (arr4[i] < arr4[minIdx]) {
            minIdx = i;
        }
        if (arr4[i] > arr4[maxIdx]) {
            maxIdx = i;
        }
    }

    int left, right;
    if (minIdx < maxIdx) {
        left = minIdx;
        right = maxIdx;
    }
    else {
        left = maxIdx;
        right = minIdx;
    }

    double prodMinMax = 1;
    if (right - left <= 1) {
        prodMinMax = 0;
    }
    else {
        for (int i = left + 1; i < right; i++) {
            prodMinMax = prodMinMax * arr4[i];
        }
    }

    double evenProd = 1;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            evenProd = evenProd * arr4[i];
        }
    }

    int firstNeg = -1;
    int lastNeg = -1;
    for (int i = 0; i < 10; i++) {
        if (arr4[i] < 0) {
            if (firstNeg == -1) {
                firstNeg = i;
            }
            lastNeg = i;
        }
    }

    double sumNegRange = 0;
    if (firstNeg != -1 && lastNeg - firstNeg > 1) {
        for (int i = firstNeg + 1; i < lastNeg; i++) {
            sumNegRange = sumNegRange + arr4[i];
        }
    }

    cout << "Сумма отрицательных: " << negSum << "\n";
    cout << "Произведение между min и max: " << prodMinMax << "\n";
    cout << "Произведение с четными номерами: " << evenProd << "\n";
    cout << "Сумма между первым и последним отрицательными: " << sumNegRange << "\n";

    return 0;
}