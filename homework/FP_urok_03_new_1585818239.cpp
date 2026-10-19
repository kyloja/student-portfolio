#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "Ru");

    int choice;

    do {
        std::cout << "\n\t\tМЕНЮ\n";
        std::cout << "1. Линия из символов (горизонтальная / вертикальная)\n";
        std::cout << "2. Сумма всех нечётных чисел в диапазоне\n";
        std::cout << "3. Факториал числа n\n";
        std::cout << "4. Сколько подушек сможет пошить швея\n";
        std::cout << "5. Сколько машин подъехало к складу\n";
        std::cout << "0. Выход\n";
        std::cout << "Выберите задание: ";
        std::cin >> choice;

        std::cout << std::endl;

        if (choice == 1)
        {
            std::cout << "\t\tЗадание 1\n";

            char symbol;
            char type;
            int number_of_lines;

            std::cout << "Введите число символов: ";
            std::cin >> number_of_lines;

            std::cout << "Введите какой символ будет использован: ";
            std::cin >> symbol;

            std::cout << "Введите какой будет линия (1 - горизонтальная, 2 - вертикальная): ";
            std::cin >> type;

            std::cout << "\nРезультат:\n";

            int i = 0;

            if (type == '1')
            {
                while (i < number_of_lines)
                {
                    std::cout << symbol;
                    i++;
                }
                std::cout << std::endl;
            }
            else if (type == '2')
            {
                while (i < number_of_lines)
                {
                    std::cout << symbol << std::endl;
                    i++;
                }
            }
            else
            {
                std::cout << "Ошибка: введите 1 или 2!" << std::endl;
            }
        }
        else if (choice == 2)
        {
            std::cout << "\t\tЗадание 2\n";

            int begin, end;
            int sum = 0;

            std::cout << "Введите начало диапазона: ";
            std::cin >> begin;

            std::cout << "Введите конец диапазона: ";
            std::cin >> end;

            int i = begin;

            while (i <= end)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
                i++;
            }

            std::cout << "Сумма всех нечётных чисел = " << sum << std::endl;
        }
        else if (choice == 3)
        {
            std::cout << "\t\tЗадание 3\n";

            int n;
            int factorial = 1;

            std::cout << "Введите число n: ";
            std::cin >> n;

            if (n < 0)
            {
                std::cout << "Факториал отрицательного числа не определён!" << std::endl;
            }
            else
            {
                int i = 1;

                while (i <= n)
                {
                    factorial = factorial * i;
                    i++;
                }

                std::cout << "Факториал числа " << n << " = " << factorial << std::endl;
            }
        }
        else if (choice == 4)
        {
            std::cout << "\t\tЗадание 4\n";

            int L;  // длина ткани
            int P;  // длина одной подушки
            int count = 0;

            std::cout << "Введите длину ткани L: ";
            std::cin >> L;

            std::cout << "Введите длину подушки P: ";
            std::cin >> P;

            while (L >= P)
            {
                L = L - P;
                count++;
            }

            std::cout << "Швея сможет пошить " << count << " подушек" << std::endl;
        }
        else if (choice == 5)
        {
            std::cout << "\t\tЗадание 5\n";

            int N;          // сколько ящиков на складе
            int boxes;      // сколько ящиков забирает одна машина
            int cars = 0;   // счётчик машин

            std::cout << "Введите количество ящиков на складе: ";
            std::cin >> N;

            while (N > 0)
            {
                std::cout << "Сколько ящиков заберёт следующая машина? ";
                std::cin >> boxes;

                if (boxes > N)
                {
                    boxes = N;
                }

                N = N - boxes;
                cars++;

                std::cout << "Осталось ящиков: " << N << std::endl;
            }

            std::cout << "Всего подъехало машин: " << cars << std::endl;
        }
        else if (choice == 0)
        {
            std::cout << "Выход из программы.\n";
        }
        else
        {
            std::cout << "Ошибка! Введите число от 0 до 5.\n";
        }

    } while (choice != 0);

    return 0;
}