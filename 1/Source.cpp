#include <iostream> 
#include <time.h>
const int N = 15;
void main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "�������� ������ ����������:\n"
        << "1 - 9x12\n"
        << "2 - 10x15\n";
    int size = 0;
    std::cin >> size;

    int count;
    std::cout << "\n������� ���������� ����������: ";
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
        std::cout << "����: " << price
            << "\n����������: " << count << " ��.\n"
            << "�����: " << count * price
            << "\n������: " << ((count > 5) ? price * count * 0.1 : 0)
            << "\n� ������: " << count * price - ((count > 5) ? price * count * 0.1 : 0) << '\n';
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
	cout << "" << endl << "������" << endl;
	cout << "������ (��) �> ";
	cin >> w;
	cout << "������ (��) �> ";
	cin >> h;
	cout << endl << endl << "��������:" << endl << "1 � �������" << endl << "2 � ��������" << endl << "3 � ��������" << endl << "��� ����� �>";
	int a;
	cin >> a;
	switch (a) {
	case 1: cout << endl << endl << "" << endl << "���� �� ��. �: 200.00 ���." << endl << "�������: " << w * h / 10000 << "��. �." << endl << "� ������: " << (w * h / 10000) * Pl << endl << "" << endl; break;
	case 2: cout << endl << endl << "" << endl << "���� �� ��. �: 250.00 ���." << endl << "�������: " << w * h / 10000 << "��. �." << endl << "� ������: " << (w * h / 10000) * Al << endl << "" << endl; break;
	case 3: cout << endl << endl << "" << endl << "���� �� ��. �: 350.00 ���." << endl << "�������: " << w * h / 10000 << "��. �." << endl << "� ������: " << (w * h / 10000) * Te << endl << "" << endl; break;
	default: cout << endl << "�� ������ �����"; break;
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
	cout << "C���� (���.) -> "; cin >> sum;
	cout << "���� (���.) -> "; cin >> srok;
	cout << "���������� ������ (�������) -> "; cin >> proc;
	cout << endl;
	sum += (sum / 100 * proc) * (srok / 12);
	cout << "" << endl;
	cout << "���� | ������� | ������" << endl;
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
    std::cout << "����� ������(���.): ";
    std::cin >> deposit;
    do {
        std::cout << "���� ������ (���.)";
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
            std::cout << "����� �������� ������ ������ �� 1� 3� 6 ��� 12 ���.";
        }
    } while (rate == 0);
    profit = month * deposit * rate;
    std::cout << "���� ���������� ������ " << rate << "% � �����. ������� �� ������ �������� " << profit << "���." << std::endl;
}