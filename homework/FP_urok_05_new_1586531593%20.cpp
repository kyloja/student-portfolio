#include <iostream>
int main()
{
    std::cout << "\t\t\tTask #1\n";
    for (int i = 10; i <= 15; i++){
        std::cout << i << " - ";
        for(int j = 1; j <= 9; j++){
            if(i % j == 0){
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << "\t\t\tTask #2\n";
    for(int i = 2; i <= 1000; i++){
        bool primeNumber = true;
        for (int j = 2; j * j <= i; j++){
            if(i % j == 0){
                primeNumber = false;
                break;
            }
        }
        if (primeNumber){
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
    std::cout << "\t\t\tTask #3\n";
    int size;
    std::cout << "Введите размер фигуры: ";
    std::cin >> size;
    if(size <= 0 || size % 2 == 0){
        std::cout << "Ошибка! Размер должен быть положительным нечетным числом.\n";
    }
    else {
        int center = size / 2;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j || i + j == size - 1 || i == center || j == center) {
                    std::cout << "* ";
                } else {
                    std::cout << "  ";
                }
            }
            std::cout << std::endl;
        }
    }

    std::cout << "\t\t\tTask #4";
    std::cout << "Все возможные комбинации кодов (без повторения цифр):\n";

    int combinationCount = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                if (i != j && i != k && j != k) {
                    std::cout << i << j << k << " ";
                    combinationCount++;
                    if (combinationCount % 10 == 0) {
                        std::cout << std::endl;
                    }
                }
            }
        }
    }
    int totalSeconds = combinationCount * 3;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
    std::cout << "\n\nВсего комбинаций: " << combinationCount << std::endl;
    std::cout << "Время для открытия в худшем случае: ";
    std::cout << totalSeconds << " сек. (" << minutes << " мин. " << seconds << " сек.)\n";

    std::cout << "\n\t\t\tTask #5\n";
    int totalCompanyPayout = 0;
    std::cout << "--- Заполнение отчета за весенний квартал ---\n";
    for (int i = 1; i <= 12; i++) {
        int march, april, may;
        std::cout << "\nСотрудник №" << i << ":\n";
        std::cout << "  Введите зарплату за Март: ";
        std::cin >> march;
        std::cout << "  Введите зарплату за Апрель: ";
        std::cin >> april;
        std::cout << "  Введите зарплату за Май: ";
        std::cin >> may;
        int employeeQuarterTotal = march + april + may;
        std::cout << "  Итого за квартал для сотрудника №" << i << ": " << employeeQuarterTotal << " руб.\n";
        totalCompanyPayout += employeeQuarterTotal;
    }
    std::cout << "ОБЩАЯ сумма выплат по всем сотрудникам: " << totalCompanyPayout << " руб.\n";
}