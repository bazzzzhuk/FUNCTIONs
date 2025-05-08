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
	cout << "���������� ����������.\n������� ����o  : "; cin >> number_f;
	if (number_f != 0 && number_f <= 20) { cout << "��������� �����: " << Factorial(number_f) << endl; }
	else {
		cout << "��������� ����� ����, ���� ������� ������� ������� �����!!!" << endl;
	}
	cout << endl;

	double number, exp;
	cout << "���������� � �������\n������� ���������  : "; cin >> number;
	cout << "������� �������: "; cin >> exp;
	cout << "����� " << number << " � ������� " << exp << " ����� " << Exponenta(number, exp) << endl;

}
