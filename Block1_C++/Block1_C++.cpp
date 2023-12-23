#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// Chapter 17.5
#include <cmath>

// Chapter 16.5
// #include <ctime>

// Chapter 14.4
//#include <string>
using namespace std;

// Chapter 13.4
//#include "Header.h"

// Chapter 17.5

class Vector {
private:
	double x;   // координата по оси x
	double y;   // координата по оси y
	double z;   // координата по оси z

public:
	// Конструктор класса Vector
	Vector(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}

	// Метод для вывода значений переменных
	void printValues() {
		cout << "Значения переменных вектора: " << x << ", " << y << ", " << z << endl;
	}

	// Метод для вычисления длины (модуля) вектора
	double getLength() {
		return sqrt(x * x + y * y + z * z);
	}
};

int main() {

	setlocale(LC_ALL, "");
	// Создание объекта класса Vector
	Vector vector(3.0, 4.0, 5.0);

	// Вывод значений переменных вектора
	vector.printValues();

	// Вычисление и вывод длины вектора
	cout << "Длина вектора: " << vector.getLength() << endl;

	return 0;
}


/* Chapter 16.5
 int main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размерность массива: ";
	cin >> n;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
		for (int j = 0; j < n; j++) {
			arr[i][j] = i + j;
		}
	}

	cout << "Двумерный массив:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	/* int calendarDay;
	cout << "Введите текущее число календаря: ";
	cin >> calendarDay;

	time_t now = time(0);
	tm* date = localtime(&now);
	int day = date->tm_mday;
	int calendarDay = day % n;

	int rowSum = 0;
	int rowIndex = calendarDay % n;
	for (int j = 0; j < n; j++) {
		rowSum += arr[rowIndex][j];
	}

	cout << "Сумма элементов в строке с индексом " << rowIndex << ": " << rowSum << endl;

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
} */

/* Chapter 15.4

void printNumbers(int n, bool even)
{
	for (int i = 0; i <= n; i++)
	{
		if ((i % 2 == 0 && even) || (i % 2 != 0 && !even))
		{
			std::cout << i << " ";
		}
	}
}


int main()
{
	// return 0;
	const int n = 10;

	// Печать четных чисел от 0 до n
	printNumbers(n, true);

	std::cout << std::endl;

	// Печать нечетных чисел от 0 до n
	printNumbers(n, false);

	return 0;

}


*/

/* Chapter 14.4
int main()
{
   // int result = sum(10, 20);
   // std::cout << "Result = " << result  << std::endl;


	// Создание и инициализация переменной типа std::string
	// std::string myString = "Hello, C++";

	// Вывод самой строковой переменной
	// std::cout << "String: " << myString << std::endl;

	// Вывод длины строки
	// std::cout << "Length: " << myString.length() << std::endl;

	// Вывод первого символа строки
	// std::cout << "First character: " << myString.front() << std::endl;

	// Вывод последнего символа строки
	// std::cout << "Last character: " << myString.back() << std::endl;

 }

*/