#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\n\t\t ЗАДАНИЕ ОНЕ";

	// цены продуктов
	double p1 = 8, p2 = 10, p3 = 12, p4 = 11;   // пиццы
	double p5 = 1.5, p6 = 2.5, p7 = 3;          // напитки

	cout << "\n\n\t МЕНЮ ПИЦЦЕРИИ";
	cout << "\nПиццы:";
	cout << "\n1 - Маргарита - " << p1 << "$";
	cout << "\n2 - Пепперони - " << p2 << "$";
	cout << "\n3 - Четыре сыра - " << p3 << "$";
	cout << "\n4 - Гавайская - " << p4 << "$";
	cout << "\nНапитки:";
	cout << "\n5 - Вода - " << p5 << "$";
	cout << "\n6 - Сок - " << p6 << "$";
	cout << "\n7 - Кола - " << p7 << "$\n";

	// сколько единиц каждого продукта заказано
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, q6 = 0, q7 = 0;

	int code = -1;
	while (code != 0)
	{
		cout << "\nВведите код продукта (0 - закончить заказ): ";
		cin >> code;

		if (code >= 1 && code <= 7)
		{
			int count = 0;
			cout << "Введите количество: ";
			cin >> count;

			if (count > 0)
			{
				if (code == 1) q1 += count;
				else if (code == 2) q2 += count;
				else if (code == 3) q3 += count;
				else if (code == 4) q4 += count;
				else if (code == 5) q5 += count;
				else if (code == 6) q6 += count;
				else if (code == 7) q7 += count;
			}
			else
			{
				cout << "Ошибка! Количество должно быть больше нуля\n";
			}
		}
		else if (code != 0)
		{
			cout << "Ошибка! Такого кода нет в меню\n";
		}
	}

	// пиццы: каждая пятая в подарок
	int gift1 = q1 / 5;
	int gift2 = q2 / 5;
	int gift3 = q3 / 5;
	int gift4 = q4 / 5;

	double cost1 = (q1 - gift1) * p1;
	double cost2 = (q2 - gift2) * p2;
	double cost3 = (q3 - gift3) * p3;
	double cost4 = (q4 - gift4) * p4;

	// напитки: цена больше 2$ и количество больше 3 - скидка 15% на этот напиток
	double cost5 = q5 * p5;
	double cost6 = q6 * p6;
	double cost7 = q7 * p7;
	if (p5 > 2 && q5 > 3) cost5 = cost5 * 0.85;
	if (p6 > 2 && q6 > 3) cost6 = cost6 * 0.85;
	if (p7 > 2 && q7 > 3) cost7 = cost7 * 0.85;

	double sum = cost1 + cost2 + cost3 + cost4 + cost5 + cost6 + cost7;

	if (sum == 0)
	{
		cout << "\nВы ничего не заказали.\n";
	}
	else
	{
		cout << "\n\t\t ЧЕК";
		cout << "\nНазвание - количество - цена\n";

		if (q1 > 0)
		{
			cout << "Маргарита - " << q1 << " - " << cost1 << "$";
			if (gift1 > 0) cout << " (в подарок: " << gift1 << ")";
			cout << "\n";
		}
		if (q2 > 0)
		{
			cout << "Пепперони - " << q2 << " - " << cost2 << "$";
			if (gift2 > 0) cout << " (в подарок: " << gift2 << ")";
			cout << "\n";
		}
		if (q3 > 0)
		{
			cout << "Четыре сыра - " << q3 << " - " << cost3 << "$";
			if (gift3 > 0) cout << " (в подарок: " << gift3 << ")";
			cout << "\n";
		}
		if (q4 > 0)
		{
			cout << "Гавайская - " << q4 << " - " << cost4 << "$";
			if (gift4 > 0) cout << " (в подарок: " << gift4 << ")";
			cout << "\n";
		}
		if (q5 > 0)
		{
			cout << "Вода - " << q5 << " - " << cost5 << "$\n";
		}
		if (q6 > 0)
		{
			cout << "Сок - " << q6 << " - " << cost6 << "$";
			if (p6 > 2 && q6 > 3) cout << " (скидка 15%)";
			cout << "\n";
		}
		if (q7 > 0)
		{
			cout << "Кола - " << q7 << " - " << cost7 << "$";
			if (p7 > 2 && q7 > 3) cout << " (скидка 15%)";
			cout << "\n";
		}

		cout << "Сумма заказа: " << sum << "$\n";

		// общая скидка 20%, если сумма больше 50$
		double total = sum;
		if (sum > 50)
		{
			double discount = sum * 0.2;
			total = sum - discount;
			cout << "Скидка 20%: -" << discount << "$\n";
		}

		cout << "ИТОГО К ОПЛАТЕ: " << total << "$\n";
	}


	cout << "\n\t\t ЗАДАНИЕ ТУ";
	double sales1 = 0, sales2 = 0, sales3 = 0;
	cout << "\nВведите уровень продаж 1 менеджера ($): ";
	cin >> sales1;
	cout << "Введите уровень продаж 2 менеджера ($): ";
	cin >> sales2;
	cout << "Введите уровень продаж 3 менеджера ($): ";
	cin >> sales3;

	if (sales1 == sales2 || sales1 == sales3 || sales2 == sales3)
	{
		cout << "Ошибка! Уровень продаж у всех менеджеров должен быть разный\n";
	}
	else
	{
		// процент от продаж
		double percent1 = 0.03, percent2 = 0.03, percent3 = 0.03;

		if (sales1 > 1000)       percent1 = 0.08;
		else if (sales1 >= 500)  percent1 = 0.05;

		if (sales2 > 1000)       percent2 = 0.08;
		else if (sales2 >= 500)  percent2 = 0.05;

		if (sales3 > 1000)       percent3 = 0.08;
		else if (sales3 >= 500)  percent3 = 0.05;

		double salary1 = 200 + sales1 * percent1;
		double salary2 = 200 + sales2 * percent2;
		double salary3 = 200 + sales3 * percent3;

		cout << "\nЗарплата без премии:";
		cout << "\nМенеджер 1: " << salary1 << "$";
		cout << "\nМенеджер 2: " << salary2 << "$";
		cout << "\nМенеджер 3: " << salary3 << "$";

		// лучший менеджер - у кого больше продаж, ему премия 200$
		int best = 0;
		if (sales1 > sales2 && sales1 > sales3)
		{
			best = 1;
			salary1 += 200;
		}
		else if (sales2 > sales1 && sales2 > sales3)
		{
			best = 2;
			salary2 += 200;
		}
		else
		{
			best = 3;
			salary3 += 200;
		}

		cout << "\n\nЛучший менеджер: " << best << " (премия 200$)";
		cout << "\n\nИтоговая зарплата:";
		cout << "\nМенеджер 1: " << salary1 << "$";
		cout << "\nМенеджер 2: " << salary2 << "$";
		cout << "\nМенеджер 3: " << salary3 << "$\n";
	}

	return 0;
}
