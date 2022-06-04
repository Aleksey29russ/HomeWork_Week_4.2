// HomeWork_Week_4.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "HomeTask#2.1 - введите 1\n"
		<< "HomeTask#2.2 - введите 2\n"
		<< "Выйти - введите любое число\n";
	int homework;
	cin >> homework;
	if (homework == 1)
	{
		cout << "\tHomeTask#2.1\n\n";

		int menu_1, menu_2, n, n2, temp;
		float karb = 10, havai = 12, four_chees = 13, meet = 15,
			kola = 1.0, tea = 2.1, juice = 2.5;
		float price_pizz, price_drink;
		float price = 0;

		cout << "\tВыберите пиццу:\n"
			<< string(33, '=') << endl;
		cout << "    Карбонара (10$) введите = 1 =\n"
			<< "    Гавайская (12$) введите = 2 =\n"
			<< "    4 сыра (13$) введите    = 3 =\n"
			<< "    Мясная (15$) введите    = 4 =\n";
		cin >> menu_1;
		cout << "\tВведите колличество пицц:\n";
		cin >> n;
		cout << "\tВыберите напиток:\n"
			<< string(30, '=') << endl;
		cout << "    Кола (1$) введите     = 1 =\n"
			<< "    Чай (2.1$)  введите   = 2 =\n"
			<< "    Сок (2.5$)  введите     = 3 =\n";
		cin >> menu_2;
		cout << "\tВведите колличество напитков:\n";
		cin >> n2;
		switch (menu_1)
		{
		case 1:
			price_pizz = karb;
			break;
		case 2:
			price_pizz = havai;
			break;
		case 3:
			price_pizz = four_chees;
			break;
		case 4:
			price_pizz = meet;
			break;
		default:
			cout << "Такой пиццы нет!\n";
			price_pizz = 0;
			break;
		}
		switch (menu_2)
		{
		case 1:
			price_drink = kola;
			break;
		case 2:
			price_drink = tea;
			break;
		case 3:
			price_drink = juice;
			break;
		default:
			cout << "Такого напитка нет!\n";
			price_drink = 0;
		}
		temp = n;
		if (n >= 5)
		{
			cout << "Для вас действует акция: каждая 5 пицца в подарок\n";
			n = n - n / 5;
		}
		price = price_pizz * n;
		if (n2 >= 3 && price_drink > 2)
		{
			cout << "Для вас действует скидка на напитки 15%\n";
			price = price + (n2 * price_drink * 0.85);
		}
		else  price = price + price_drink * n2;
		if (price > 50)
		{
			cout << "Для вас действует скидка 20% на всю покупку\n";
			price = price - ((price / 100) * 20);
		}
		cout << "Ваша пицца " << menu_1 << " - " << temp << " шт " << " = " << price_pizz * n << " $ " << endl;
		cout << "Ваш напиток " << menu_2 << " - " << n2 << " шт " << " = " << price_drink * n2 << " $ " << endl;
		cout << "Сумма к оплате: " << price << " $ ";
	}
	else if (homework == 2)
	{
		cout << "\tHomeTask#2.2\n\n";

		float salary1, salary2, salary3;
		float sales1, sales2, sales3;
		int best;
		cout << "Введите уровень продаж первого менеджера (Петя)\n";
		  cin >> sales1;
		if (sales1 >= 0 && sales1 < 500)
		{
			salary1 = 200 + sales1 * 0.03;
		}
		else if (sales1 >= 500 && sales1 < 1000)
		{
			salary1 = 200 + sales1 * 0.05;
		}
		else salary1 = 200 + sales1 * 0.08;
		cout << "Введите уровень продаж второго менеджера (Вася)\n";
		  cin >> sales2;
		if (sales2 >= 0 && sales2 < 500)
		{
			salary2 = 200 + sales2 * 0.03;
		}
		else if (sales2 >= 500 && sales2 < 1000)
		{
			salary2 = 200 + sales2 * 0.05;
		}
		else salary2 = 200 + sales2 * 0.08;
		cout << "Введите уровень продаж третьего менеджера (Жорик)\n";
		 cin >> sales3;
		if (sales3 >= 0 && sales3 < 500)
		{
			salary3 = 200 + sales3 * 0.03;
		}
		else if (sales3 >= 500 && sales3 < 1000)
		{
			salary3 = 200 + sales3 * 0.05;
		}
		else salary3 = 200 + sales3 * 0.08;
		float salary_max;
		if (salary1 > salary2 && salary1 > salary3)
		{
			best = 1;
			salary_max = salary1 + 200;
		}
		if (salary2 > salary1)
		{
			best = 2;
			salary_max = salary2 + 200;
		}
		if (salary3 > salary2)
		{
			best = 3;
			salary_max = salary3 + 200;
		}
		cout << "Зарплата первого менеджера равна - " << salary1 << " $ \n"
			<< "Зарплата второго менеджера равна - " << salary2 << " $ \n"
			<< "Зарплата третьего менеджера равна - " << salary3 << " $ \n"
			<< "Лучший менеджер месяца под - " << best << " номером \n"
			<< "Его зарплата с премией = " << salary_max << " $ " << endl;
	}
	else cout << "Have a good day:))\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
