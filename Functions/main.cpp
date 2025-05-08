#include<iostream>
using namespace std;
using std::cout;

int Sum(int a, int b);
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello, Functions\n" << endl;

	int a, b;
	cout << "Enter a & b: "; cin >> a >> b;
	int c = Sum(a, b); //Использование (вызов) функции - function call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a,b) << endl;
	cout << a << " * " << b << " = " << Product(a,b) << endl;
	cout << a << " / " << b << " = " << Quotient(a,b) << endl;

}
int Sum(int a, int b)//Реализация функции (Определение функции - Function definition)
{
	int c = a + b;
	return c;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(int a, int b)
{
	return (double)a / b;
}