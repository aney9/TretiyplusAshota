#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите значения массива\n";
	const int rows = 3;
	const int columns = 5;
	double array[rows][columns];
	double summa = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cin >> array[i][j];
			summa += array[i][j];
		}
	}
	double arifm = summa / 15;
	cout << "Среднее арифметическое" << ": " << arifm << endl;
	return 0;
}
