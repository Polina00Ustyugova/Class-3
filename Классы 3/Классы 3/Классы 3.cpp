#include "Pair.h"
#include <iostream>
using namespace std;
//перегрузка бинарной операции вычитания
Pair& Pair::operator -(const Pair& t) {
	Pair p;
	p.first = first - t.first;
	p.second = second - t.second;
	return p;
}

//перегрузка бинарной операции сложения
Pair Pair::operator+(const int num) {
	first = first + num;
	return *this;
}
Pair Pair::operator+(const double num) {
	second = second + num;
	return *this;
}
//перегрузка глобальной функции-операции ввода
istream& operator>>(istream& in, Pair& t) 
{
	setlocale(LC_ALL, "ru");
	cout << "Первое число: "; 
	in >> t.first;
	cout << "Второе число: "; 
	in >> t.second;
	return in;
}
//перегрузка глобальной функции-операции вывода
ostream& operator<<(ostream& out, const Pair& t) {
	return (out << t.first << " : " << t.second);
}