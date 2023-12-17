#include <iostream>

// Chapter 14.4
//#include <string>
using namespace std;

// Chapter 13.4
//#include "Header.h"


// Chapter 16.5
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

	int calendarDay;
	cout << "Введите текущее число календаря: ";
	cin >> calendarDay;

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
}

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