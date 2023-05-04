#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"rus");

	int sum, cost;

	cout << "¬ведите количество денег:";
	cin >> sum;
	cout << endl;

	cout << "¬ведите стоимость товара:";
	cin >> cost;
	cout << endl;

	cout << "—дача " << sum - cost << " –ублей.";
	
}