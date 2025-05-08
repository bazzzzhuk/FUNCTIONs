#include<iostream>
using namespace std;

unsigned long long Factorial(unsigned long long n)
{
	unsigned long long factorial = n;
	while (n > 1) factorial *= --n;
	return factorial;
}
double Exponenta(double a, int nn)
{
	double N = 1;
	if (nn < 0) 
	{ 
		a = 1 / a; 
		nn = -nn; 
	}
	for (int i = 0; i < nn; i++, N *= a);
	return N;
}
void main()
{
	setlocale(LC_ALL, "");
	long long number_f;
	cout << "Вычисление факториала.\nВведите числo  : "; cin >> number_f;
	if (number_f != 0 && number_f <= 20) { cout << "Факториал равен: " << Factorial(number_f) << endl; }
	else {
		cout << "Факториал равен нулю, либо слишком большое введёное число!!!" << endl;
	}
	cout << endl;

	double number, exp;
	cout << "Возведения в степень\nВведите Основание  : "; cin >> number;
	cout << "Введите степень: "; cin >> exp;
	cout << "Число " << number << " в степени " << exp << " равно " << Exponenta(number, exp) << endl;

}
