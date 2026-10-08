#include <iostream>

using namespace std;

int main()

{
	cout << "\n\t\t ЗАДАНИЕ ОНЕ";
	setlocale(LC_ALL, "Russian");
	int sec = 0;
	cout << "\nВведите секунды : ";
	cin >> sec;
	int hour = sec / 3600;
	int minute = sec / 60;
	cout << "Время в часах: " << hour << "\nВремя в минутах: " << minute << "\nВремя в секундах: " << sec;

	cout << "\n\t\tЗАДАНИЕ ТУ";
	double num = 0;
	cout << " \nВведите число: ";
	cin >> num;
	int intPart = (int)num ;
	double intPart1 = num - intPart;
	cout << "\nДолларов: " << intPart << "\nЦентов: " << intPart1;
	
	cout << "\n\t\t ЗАДАНИЕ ФРИ";
	int days = 0;
	cout << "\nВведите дни: ";
	cin >> days;
	int sevenDays = days / 7;
	int ostatokDAys = days % 7;
	cout << "\nНедель: " << sevenDays << "\nДней: " << ostatokDAys;

	cout << "\n\t\t ЗАДАНИЕ ФО";
	cout << "\nВычесление скорости бега";
	int dlina = 0;
	cout << "\nВведите длинну дистанции (метров): ";
	cin >> dlina;
	double time = 0;
	cout << "\nВведите время (мин.сек): ";
	cin >> time;
	int int_min = (int)time;
	double int_sec = time - int_min;
	int all_sec = int_sec * 100;
	int all_min = int_min * 60;
	float alll_time = all_min + all_sec;
	cout << "Дистанция: " << dlina << " м";
	cout << "\nВремя: " << "Минуты:" << int_min << " Секунды:" << all_sec << " = " << alll_time << " сек";
	float speed = dlina / alll_time;
	float speed_kmh = speed * 3.6;
	cout << "\nВы бежали  со скоростью: " << speed_kmh << " км/ч";

	cout << "\n\t\t ЗАДАНИЕ ФИВЕ";
	double deposit = 0;
	cout << "\nВведите сумму вклада (евро): ";
	cin >> deposit;
	double percent = 0;
	cout << "Введите процент годовых: ";
	cin >> percent;
	double yearIncome = deposit * percent / 100;
	double monthIncome = yearIncome / 12;
	cout << "Банк выплачивает вам за год: " << yearIncome << " евро";
	cout << "\nБанк выплачивает вам каждый месяц: " << monthIncome << " евро\n";
	
		
	return 0;
}