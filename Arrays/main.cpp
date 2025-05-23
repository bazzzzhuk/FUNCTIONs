#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 11, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 65, int maxRand = 90);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);

template<typename T>
int MinValueIn(T arr[], const int n);

template<typename T>
int MaxValueIn(T arr[], const int n);

template<typename T>
void ShiftLeft(T arr[], const int n, int shift_l);

template<typename T>
void ShiftRight(T arr[], const int n, int shift_r);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	int shift_l = 1;
	int shift_r = 2;
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	ShiftLeft(arr, n, shift_l);
	Print(arr, n);
	ShiftRight(arr, n, shift_r);
	Print(arr, n);
	cout << "MinValueIn: " << MinValueIn(arr, n) << endl;
	cout << "MaxValueIn: " << MaxValueIn(arr, n) << endl;
	cout << "Summa: " << Sum(arr, n) << endl;
	cout << "Avg: " << Avg(arr, n) << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	ShiftLeft(brr, SIZE, shift_l);
	Print(brr, SIZE);
	ShiftRight(brr, SIZE, shift_r);
	Print(brr, SIZE);
	cout << "MinValueIn: " << MinValueIn(brr, SIZE) << endl;
	cout << "MaxValueIn: " << MaxValueIn(brr, SIZE) << endl;
	cout << "Summa: " << Sum(brr, SIZE) << endl;
	cout << "Avg: " << Avg(brr, SIZE) << endl;

	const int char_size = 10;
	char charr[char_size];
	//int charr_int[char_size];
	FillRand(charr, char_size);
	Print(charr, char_size);
	Sort(charr, char_size);
	Print(charr, char_size);
	ShiftLeft(charr, char_size, shift_l);
	Print(charr, char_size);
	ShiftRight(charr, char_size, shift_r);
	Print(charr, char_size);
	cout << "MinValueIn: " << MinValueIn(charr, char_size) << endl;
	cout << "MaxValueIn: " << MaxValueIn(charr, char_size) << endl;
	cout << "Summa: " << Sum(charr, char_size) << endl;
	cout << "Avg: " << Avg(charr, char_size) << endl;

	const int float_size = 10;
	float flo_arr[float_size];
	FillRand(flo_arr, float_size);
	Print(flo_arr, float_size);
	Sort(flo_arr, float_size);
	Print(flo_arr, float_size);
	ShiftLeft(flo_arr, float_size, shift_l);
	Print(flo_arr, float_size);
	ShiftRight(flo_arr, float_size, shift_r);
	Print(flo_arr, float_size);
	cout << "MinValueIn: " << MinValueIn(flo_arr, float_size) << endl;
	cout << "MaxValueIn: " << MaxValueIn(flo_arr, float_size) << endl;
	cout << "Summa: " << Sum(flo_arr, float_size) << endl;
	cout << "Avg: " << Avg(flo_arr, float_size) << endl;
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	minRand *= 10;
	maxRand *= 10;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
T Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>
void ShiftLeft(T arr[], const int n, int shift_l)
{
	for (int i = 0; i < shift_l; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++) arr[i - 1] = arr[i];
		arr[n - 1] = buffer;
	}
}
template<typename T>
void ShiftRight(T arr[], const int n, int shift_r)
{
	/*for (int i = 0; i < shift_r; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
		arr[0] = buffer;
	}*/
	ShiftLeft(arr, n, n - shift_r);
}

template<typename T>
int MinValueIn(T arr[], const int n)
{
	T arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)arr_min = arr[i];
	}
	return arr_min;
}

template<typename T>
int MaxValueIn(T arr[], const int n)
{
	T arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)arr_max = arr[i];
	}
	return arr_max;
}
