#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");

    std::cout << "\t\t\tTask #1\n";
    long long n;
    std::cout << "Введите число больше 0: ";
    std::cin >> n;
    std::cout << "Наоборот: ";
    for (; n > 0; n /= 10) {
        std::cout << n % 10;
    }
    std::cout << "\n";

    std::cout << "\t\t\tTask #2\n";
    long long num;
    std::cout << "Введите число: ";
    std::cin >> num;
    if (num < 0) num = -num;
    int sum = 0;
    for (; num > 0; num /= 10) {
        sum += num % 10;
    }
    std::cout << "Сумма цифр числа: " << sum << "\n";

    std::cout << "\t\t\tTask #3\n";
    int days;
    std::cout << "Сколько дней ползла улитка? ";
    std::cin >> days;
    int path = 0;
    for (int day = 0; day < days; day++) {
        path += 15 + day * 2;
    }
    std::cout << "Общий путь: " << path << " см\n";

    std::cout << "\t\t\tTask #4\n";
    int eagles = 0;
    for (int i = 1; i <= 9; i++) {
        int coin;
        std::cout << "Бросок " << i << " (1 - орел, 0 - решка): ";
        std::cin >> coin;
        eagles += coin;
    }
    std::cout << "Орлов выпало: " << eagles << "\n";
    if (eagles % 2 == 0)
        std::cout << "Решение: положительное\n";
    else
        std::cout << "Решение: отрицательное\n";

    std::cout << "\t\t\tTask #5\n";
    int month, startDay;
    std::cout << "Номер месяца (1-12): ";
    std::cin >> month;
    std::cout << "С какого дня недели начинается месяц (1 - Пн || 7 - Вс): ";
    std::cin >> startDay;

    int monthDays = 31;
    if (month == 2) monthDays = 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11) monthDays = 30;

    std::cout << "\n\t\t\t";
    switch (month) {
        case 1:  std::cout << "Январь";   break;
        case 2:  std::cout << "Февраль";  break;
        case 3:  std::cout << "Март";     break;
        case 4:  std::cout << "Апрель";   break;
        case 5:  std::cout << "Май";      break;
        case 6:  std::cout << "Июнь";     break;
        case 7:  std::cout << "Июль";     break;
        case 8:  std::cout << "Август";   break;
        case 9:  std::cout << "Сентябрь"; break;
        case 10: std::cout << "Октябрь";  break;
        case 11: std::cout << "Ноябрь";   break;
        case 12: std::cout << "Декабрь";  break;
    }
    std::cout << "\n";

    std::cout << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс\n";

    for (int i = 1; i < startDay; i++) {
        std::cout << "\t";
    }

    int weekends = 0;
    for (int d = 1; d <= monthDays; d++) {
        std::cout << d << "\t";

        int weekday = (startDay - 1 + d - 1) % 7 + 1;
        if (weekday == 6 || weekday == 7) weekends++;

        if ((startDay - 1 + d) % 7 == 0) {
            std::cout << "\n";
        }
    }
    std::cout << "\n\nВыходных в месяце: " << weekends << "\n";

    return 0;
}