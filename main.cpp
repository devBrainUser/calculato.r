#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"rus");

	int sum, cost;

	cout << "������� ���������� �����:";
	cin >> sum;
	cout << endl;

	cout << "������� ��������� ������:";
	cin >> cost;
	cout << endl;

	cout << "����� " << sum - cost << " ������.";
	
}