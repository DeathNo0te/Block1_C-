#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// Chapter 18.5
// #include <string>
// #include <algorithm>

// Chapter 17.5
// #include <cmath>

// Chapter 16.5
// #include <ctime>

// Chapter 14.4
//#include <string>
using namespace std;

// Chapter 13.4
//#include "Header.h"

// Chapter 19.5
class Animal {
public:
	virtual void voice() {
		cout << "Animal voice!" << endl;
	}
};

class Dog : public Animal {
public:
	void voice() override {
		cout << "Woof!" << endl;
	}
};

class Cat : public Animal {
public:
	void voice() override {
		cout << "Meow!" << endl;
	}
};

class Cow : public Animal {
public:
	void voice() override {
		cout << "Moo!" << endl;
	}
};

int main() {
	Animal* animals[3];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	for (int i = 0; i < 3; i++) {
		animals[i]->voice();
	}

	// Очищение памяти
	for (int i = 0; i < 3; i++) {
		delete animals[i];
	}

	return 0;
}



/* Chapter 18.5

class Player {
private:
	string playerName;
	int playerScore;


public:
	// Конструктор класса
	Player() : playerName(playerName), playerScore(0) {}

	Player(const string& name, int score) : playerName(name), playerScore(score) {}

	// Метод для получения имени игрока
	string getName() const {
		return playerName;
	}

	// Метод для получения количества очков игрока
	int getScore() const {
		return playerScore;
	}
};

// Функция сравнения для сортировки по убыванию очков
bool comparePlayers(const Player& player1, const Player& player2) {
	return player1.getScore() > player2.getScore();
}

int main() {

	setlocale(LC_ALL, "");

	int numPlayers;

	// Получаем количество игроков от пользователя
	cout << "Введите количество игроков: ";
	cin >> numPlayers;

	// Создаем динамический массив объектов Player
	Player* players = new Player[numPlayers];

	// Получаем от пользователя имена и очки игроков и сохраняем в массиве
	for (int i = 0; i < numPlayers; ++i) {
		string playerName;
		int playerScore;

		cout << "Введите имя игрока " << i + 1 << ": ";
		cin >> playerName;

		cout << "Введите количество очков для игрока " << i + 1 << ": ";
		cin >> playerScore;

		players[i] = Player(playerName, playerScore);
	}

	// Сортируем массив игроков по убыванию очков
	sort(players, players + numPlayers, comparePlayers);

	// Выводим отсортированные имена и очки игроков
	cout << "\nОтсортированный список игроков:\n";
	for (int i = 0; i < numPlayers; ++i) {
		cout << "Игрок: " << players[i].getName() << ", Очки: " << players[i].getScore() << endl;
	}

	// Освобождаем выделенную память
	delete[] players;

	return 0;
}*/


/* Chapter 17.5

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
*/

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
			cout << i << " ";
		}
	}
}


int main()
{
	// return 0;
	const int n = 10;

	// Печать четных чисел от 0 до n
	printNumbers(n, true);

	cout << endl;

	// Печать нечетных чисел от 0 до n
	printNumbers(n, false);

	return 0;

}


*/

/* Chapter 14.4
int main()
{
   // int result = sum(10, 20);
   // cout << "Result = " << result  << endl;


	// Создание и инициализация переменной типа string
	// string myString = "Hello, C++";

	// Вывод самой строковой переменной
	// cout << "String: " << myString << endl;

	// Вывод длины строки
	// cout << "Length: " << myString.length() << endl;

	// Вывод первого символа строки
	// cout << "First character: " << myString.front() << endl;

	// Вывод последнего символа строки
	// cout << "Last character: " << myString.back() << endl;

 }

*/