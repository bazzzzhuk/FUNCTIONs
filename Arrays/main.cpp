#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(double arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(float arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(char arr[], const int n, int minRand=65, int maxRand=175);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);

void Sum(int arr[], const int n);
void Sum(double arr[], const int n);
void Sum(float arr[], const int n);
void Sum(char arr[], const int n);

void Avg(int arr[], const int n);
void Avg(double arr[], const int n);
void Avg(float arr[], const int n);
void Avg(char arr[], const int n);

void MinValueIn(int arr[], const int n);
void MinValueIn(double arr[], const int n);
void MinValueIn(float arr[], const int n);
void MinValueIn(char arr[], const int n);

void MaxValueIn(int arr[], const int n);
void MaxValueIn(double arr[], const int n);
void MaxValueIn(float arr[], const int n);
void MaxValueIn(char arr[], const int n);

void ShiftLeft(int arr[], const int n);
void ShiftLeft(double arr[], const int n);
void ShiftLeft(float arr[], const int n);
void ShiftLeft(char arr[], const int n);

void ShiftRight(int arr[], const int n);
void ShiftRight(double arr[], const int n);
void ShiftRight(float arr[], const int n);
void ShiftRight(char arr[], const int n);


void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);

	const int char_size = 20;
	char char_rr[char_size];
	FillRand(char_rr, char_size);
	Print(char_rr, char_size);
	Sort(char_rr, char_size);
	Print(char_rr, char_size);

	
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)-minRand;
	}
}

void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)-minRand;
	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)-minRand;
		arr[i] /= 100;
	}
}

void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)-minRand;
		arr[i] /= 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}