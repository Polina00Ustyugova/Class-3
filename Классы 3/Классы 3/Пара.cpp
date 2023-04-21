#include "Pair.h"
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	Pair a;//конструктор без параметров
	Pair b; //конструктор без параметров
	Pair c; //конструктор без параметров
	cout << "ВВОД а" << endl; 
	cin >> a;//ввод переменной
	cout << "ВВОД b " << endl;
	cin >> b;//ввод переменной
	a = a - b;
	cout << a << endl;//вывод переменной
	cout << "a + 4 = " << a + 4 << endl; //вывод переменной
	cout << "b + 4.5 = " << b + 4.5 << endl; //вывод переменной
}