#include <iostream> 
#include <time.h>
const int N = 15;
void main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "Выбирите размер фотографии:\n"
        << "1 - 9x12\n"
        << "2 - 10x15\n";
    int size = 0;
    std::cin >> size;

    int count;
    std::cout << "\nВведите количество фотографий: ";
    std::cin >> count;
    std::cout << '\n';

    double price = 0;
    switch (size)
    {
    case 1: price = 3.45; break;
    case 2: price = 5.04; break;
    }
    if (size < 1 || size>3 || count < 0)
        std::cout << "Error!\n";
    else {
        std::cout << "Цена: " << price
            << "\nКоличество: " << count << " шт.\n"
            << "Сумма: " << count * price
            << "\nСкидка: " << ((count > 5) ? price * count * 0.1 : 0)
            << "\nК оплате: " << count * price - ((count > 5) ? price * count * 0.1 : 0) << '\n';
    }
    system("pause");
}

#include <iostream>
#define Pl 200
#define Al 250
#define Te 350
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float w, h;
	cout << "" << endl << "Жалюзи" << endl;
	cout << "Ширина (см) –> ";
	cin >> w;
	cout << "Высота (см) –> ";
	cin >> h;
	cout << endl << endl << "Материал:" << endl << "1 – Пластик" << endl << "2 – Текстиль" << endl << "3 – Алюминий" << endl << "Ваш выбор –>";
	int a;
	cin >> a;
	switch (a) {
	case 1: cout << endl << endl << "" << endl << "Цена за кв. м: 200.00 руб." << endl << "Площадь: " << w * h / 10000 << "кв. м." << endl << "К оплате: " << (w * h / 10000) * Pl << endl << "" << endl; break;
	case 2: cout << endl << endl << "" << endl << "Цена за кв. м: 250.00 руб." << endl << "Площадь: " << w * h / 10000 << "кв. м." << endl << "К оплате: " << (w * h / 10000) * Al << endl << "" << endl; break;
	case 3: cout << endl << endl << "" << endl << "Цена за кв. м: 350.00 руб." << endl << "Площадь: " << w * h / 10000 << "кв. м." << endl << "К оплате: " << (w * h / 10000) * Te << endl << "" << endl; break;
	default: cout << endl << "Не верный выбор"; break;
	};
	system("pause");
	cin.get();
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double sum, srok, proc;
	cout << "Cумма (руб.) -> "; cin >> sum;
	cout << "Срок (мес.) -> "; cin >> srok;
	cout << "Процентная ставка (годовых) -> "; cin >> proc;
	cout << endl;
	sum += (sum / 100 * proc) * (srok / 12);
	cout << "" << endl;
	cout << "Долг | Процент | Платеж" << endl;
	cout << "" << endl;
	double plata = sum / srok;
	for (int x = 1; x <= srok; x++)
	{
		cout << x << ": ";
		cout << sum - plata << " | " << proc << " | " << plata << endl;
		sum -= plata;
	}
	cout << "" << endl;
	return 0;
}



#include <iostream>
int main() {
    setlocale(0, "rus");
    float deposit, rate = 0, profit;
    int month;
    std::cout << "сумма вклада(руб.): ";
    std::cin >> deposit;
    do {
        std::cout << "срок вклада (мес.)";
        std::cin >> month;
        switch (month) {
        case 3:
            rate = 9.0;
            break;
        case 6:
            rate = 11.5;
            break;
        case 12:
            rate = 13.5;
            break;
        case 18:
            rate = 15.0;
            break;
        case 24:
            rate = 18.0;
            break;
        case 36:
            rate = 24.0;
            break;
        default:
            std::cout << "вклад возможен сроком только на 1б 3б 6 или 12 мес.";
        }
    } while (rate == 0);
    profit = month * deposit * rate;
    std::cout << "ваша процентная ставка " << rate << "% в месяц. прибыль по вкладу составит " << profit << "руб." << std::endl;
}